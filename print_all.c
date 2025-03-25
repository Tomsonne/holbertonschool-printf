#include "holberton.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_validate - fonction pour valider si format est valide 
 * 
 *@format: entree texte  
 */
int print_validate(char format)
{
	int i = 0 ;
	char format_valide[] = {'c', 's', '%', 'd', 'i'};

	 while (format_valide[i] != format)
	{
		if (format  == format_valide[i])
			{
				return (1);
			}
		
		i++;
	}
return(0);
}

/**
 * print_all - fontion qui imprime selon un parametre
 * 
 * @format: entree texte
 */

 int _printf(const char *format, ...)
{
	int i = 0;
	/*len: compteur de caractere pour le return*/
	int len = 0;


	va_list arg;

 form format_types[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_char},
	{' ', NULL},
	{'\0', NULL}
};

va_start(arg, format);

	while(format[i] == '\0')
	{
		if (format[i] == '%')
		{
			if (print_validate(format[i++]) == 1)
			{
				int val = i;
				len += format_types[val].f(arg);
			}

		}
		
		len += _write(format[i]);
		i++;
	}
va_end(arg);
/*nombre de caractere imprime*/
	return (len);
}
