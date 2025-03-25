#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
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
int count = 1;
int m = 0, i = 0;
unsigned int num = 0;
char *Int_min = "-2147483648";

num = va_arg(args, int);
if (num == INT_MIN)
{
	while (Int_min[i] != '\0')
		_write(Int_min[i++]);
	return (11);
}
if (num < 0)
{
	_write('-');
	m = m * -1;
	num = m;
	count += 1;
}

while (num > 9)
{
	num = num / 10;
	count++;
}

recursion_int(m);
return (count);
}

void recursion_print_int(int num)
{
unsigned int x = num;

if (x / 10)
	recursion_print_int (num / 10);
_write(x % 10 + '0');

}
