#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>


/**
 * print_char - affiche un caractere
 * @args: liste des arguments (prends un caractere en parametre)
 *
 *Cette fonction récupère un caractère depuis la liste d'arguments
 * et l'affiche à l'aide de `_write()`.
 *
 * Return: Toujours 1 ( car 1 caractere affiché)
 */

int print_char(va_list args)
{
_write(va_arg(args, int));
return (1);
}

/**
 * print_string - affiche une chaine de caractere
 * @args: liste des arguments (prend une chaine en parametre)
 *
 *  Cette fonction affiche chaque caractère de la chaîne passée en argument.
 * Si la chaîne est NULL, elle affiche "(null)".
 *
 * Return: 1 ( pas d'erreur ) ou 6 si arg est NULL 6 car len de "(NULL)"=6
 */

int print_string(va_list args)
{
int count = 0;
char *arg = va_arg(args, char *);

if (arg != NULL)
{
while (arg[count])
	{
	_write(arg[count]);
	count++;
	}
return (count);
}
_write('(');
_write('n');
_write('u');
_write('l');
_write('l');
_write(')');
return (6);
}

/**
 * print_int - affiche un entier signe
 * @args: liste des arguments (entier)
 *
 * Cette fonction affiche un entier sous forme de caractères.
 * Elle gère les nombres négatifs en affichant le signe '-'.
 *
 * Return: nombre total de chiffres affichés
 */

int print_int(va_list args)
{
int count = 0;
unsigned int num;
int n = va_arg(args, int);

if (n < 0)
{
	_write('-');
	num = (unsigned int) (-n);
	count++;
}
else
num = n;

if (num == 0)
{
	_write('0');
	count++;
}

else
{
	recursion_print_int(num);
	while (num > 0)
	{
		num /= 10;
		count++;
	}
}
return (count);
}

/**
 * recursion_print_int - affiche un entier
 * @num: valeur a afficher
 *
 * Cette fonction utilise la récursivité pour afficher un entier
 * chiffre par chiffre, en commençant par le plus significatif.
 *
 * Return: void
 */

void recursion_print_int(unsigned int num)
{
if (num / 10)
	recursion_print_int (num / 10);
_write(num % 10 + '0');

}
