#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_validate - Verifie si un specifier de format est valide
 *@format: caractere représentant le specifieur
 *Return: 1 si format valide 0 si format invalide
 */
int print_validate(char format)
{
	int i = 0;
	char format_valide[] = "csdi";

for (i = 0; format_valide[i] != '\0'; i++)
{
if (format  == format_valide[i])
	return (1);
}
return (0);
}

/**
 * print_all - Analyse et affiche le format donné
 * @args: liste des arguments a afficher
 * @format: Chaine de format (ex : "Hello %s")
 *
 * Cette fonction analyse la chaîne `format`, détecte les spécifiers (%)
 * et affiche le texte en appelant les fonctions appropriées.
 *
 * Return: Nombre total de caracteres affiches
 */

int print_all(const char *format, va_list args)
{
int i = 0;
/*len: compteur de caractere pour le return*/
int len = 0;

while (format && format[i])
{
if (format[0] == '%' && format[1] == '\0')
return (-1);

if (format[i] == '%')
{
i++;
/*gére si % et le specifier sont espacés*/
while (format[i] == ' ')
i++;

/*gére si le specifier vaut aussi % et afficher % et ajoute 1 a len*/
if (format[i] == '%')
len += _write('%');

else if (print_validate(format[i]) == 1)
len += print_func_format(format[i], args);
else
{
len += _write('%');
len += _write(format[i]);
}
}
else
len += _write(format[i]);

i++;
}
return (len);
}
