#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * print_func_format - Écris un entier
 * @format: caractère apres le %
 * @args: variable a afficher dans le printf
 * Return: 1 ( pas d'erreur )
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

