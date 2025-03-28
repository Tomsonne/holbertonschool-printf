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
int cpindex;
char *binaire;
int num = va_arg(args, int);

binaire = malloc(33);
while (num > 0)
{
if (num % 2 == 1)
{
binaire[index] = '1';
index++;
}
else
{
binaire[index] = '0';
index++;
}
num = num / 2;
}
cpindex = index ;
while (cpindex != 0)
{
_write(binaire[cpindex]);
cpindex--;
}
return (index);
}
