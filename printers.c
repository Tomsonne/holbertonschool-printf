#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>


/**
 * print_char - Écris un caractere
 * @args: type
 * Return: 1 ( pas d'erreur )
 */

int print_char(va_list args)
{
_write(va_arg(args, int));
return (1);
}

/**
 * print_string - Écris une chaine de caractere
 * @args: type
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
 * print_int - Écris un entier
 * @args: type
 * Return: 1 ( pas d'erreur )
 */

int print_int(va_list args)
{
int count = 0;
unsigned int num ;
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
 * recursion_print_int - Écris un entier
 * @num: valeur a afficher
 * Return: void
 */

void recursion_print_int(unsigned int num)
{
if (num / 10)
	recursion_print_int (num / 10);
_write(num % 10 + '0');

}
