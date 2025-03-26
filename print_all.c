#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_validate - fonction pour valider si format est valide
 *@format: entree texte
 *Return: 1 si caractere valide 0 si caractere invalide
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
 * print_all - fontion qui imprime selon un parametre
 * @args: variable a afficher dans le printf (%s %c %d ...)
 * @format: entree texte
 * Return: len est la longueur de la chaine afficher
 */

int print_all(const char *format, va_list args)
{
int i = 0;
/*len: compteur de caractere pour le return*/
int len = 0;

while (format && format[i])
{

if (format[0] == '%' && format[1] == '\0')
return (0);

if (format[i] == '%')
{
i++;
/*gére si % et le specifier sont espacés*/
while (format[i] == ' ')
i++;

/*gére si le specifier vaut aussi % et afficher % et ajoute 1 a len*/
if (format[i] == '%')
len += _write('%');

if (print_validate(format[i]) == 1)
len += print_func_format(format[i], args);
}
else
len += _write(format[i]);

i++;
}
return (len);
}
