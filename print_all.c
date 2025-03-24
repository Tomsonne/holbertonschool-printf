#include "holberton.h"


/**
 * print_validate - fonction pour valider si format est valide 
 * 
 * 
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
 * @format: parametre
 * 
 * 
 */

 int _printf(const char *format, ...)
{
	int i = 0;
	/*len: compteur de caractere pour le return*/
	int len = 0;


	va_list arg;

 format_type format[] = {



	{'c', print_char},
	{'s', print_string},
	{'%', print_pourcent},
	{'\0', NULL}
};

va_start(arg, format);

/*boucle pour compter le nombre de caracteres qui vont etre imprimer pour le return*/
	for (i = 0; format [len] < '\0'; len++)
	{









	}
va_end()
/*nombre de caractere imprime*/
	return (len);
}