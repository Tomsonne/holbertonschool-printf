#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * print_func_format - execute la fonction associee au specifieur de format
 * @format: caractère apres le % indiquant le type de format
 * @args: liste des arguments a afficher
 *
 * Cette fonction compare le format donné avec une liste de formats valides
 * et appelle la fonction correspondante (ex: print_char pour '%c').
 *
 * Return: len de l'affichage ( pas d'erreur )
 */


int print_func_format(const char format, va_list args)
{
int count = 0;
int index = 0;

form format_types[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_int},
	{'i', print_int},
	{'b', print_conv_binaire},
	{'%', NULL},
	{'\0', NULL},
};

while (format_types[index].format)
{
	if (format_types[index].format == format)
		count += format_types[index].f(args);
	index++;
}

return (count);
}

