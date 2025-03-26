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
	char format_valide[] = "csdi";

    for(i = 0; format_valide[i]; i++)
		{
            if (format  == format_valide[i])
			{
				return (1);
			}
        }
		

return(0);
}

/**
 * print_all - fontion qui imprime selon un parametre
 * 
 * @format: entree texte
 */

int print_all(const char *format, va_list args)
{
	int i = 0;
	/*len: compteur de caractere pour le return*/
	int len = 0;

    while(format && format[i])
    {
        if (format[i] == '%')
            {
                i++;

                if (format[i] == ' ') /*gére si % et le specifier sont espacés*/
                    i++;

                if (format[i] == '%') /*gére si le specifier vaut aussi % et afficher % et ajoute 1 a len*/
                    len += _write(format[i]);

                if (print_validate(format[i]) == 1)
                    len += print_func_format(format[i], args);
            }
        else 
            {
                len += _write(format[i]);
            }
        i++;
    }


	return (len);
}
