#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - ma fonction printf
 * @format: chaine de caractere contenant le texte 
 * et les formats (%s, %c, %d ...)
 * Return: Nombre de caracteres total a affichés
 * ou -1 en cas d'erreur.
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
