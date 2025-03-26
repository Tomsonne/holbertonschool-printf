#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - ma fonction printf
 * @format: string a afficher
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
va_list args;
int len = 0;

if (format == NULL)
return (-1);

va_start(args, format);

len = print_all(format, args);
va_end(args);
return (len);

}
