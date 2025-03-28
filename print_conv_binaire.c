#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>


/**
 * print_conv_binaire - Écris un caractere
 * @args: type
 * Return: 1 ( pas d'erreur )
 */


int print_conv_binaire(va_list args)
{
int index = 0;
int i;
char *binaire;
unsigned int num = va_arg(args, unsigned int);

binaire = malloc(65);

if (num == 0)
{
_write('0');
return (1);
}
while (num > 0)
{
binaire[index++] = (num % 2) + '0';
num = num / 2;
}
for (i = index -1; i >= 0; i--)
{
_write(binaire[i]);
}
va_end(args);
return (index);
}
