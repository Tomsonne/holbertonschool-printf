#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_char - Écris un caractere
 * @args: type
 * Return: 1 ( pas d'erreur )
 */

int print_char(va_list args)
{
    _write(va_arg(args,int ));
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
        while(arg[count])
        {
            _write(arg[count]);
            count++;
        }
        return (count);
    }
    _write('(');
    _write('N');
    _write('U');
    _write('L');
    _write('L');
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
}