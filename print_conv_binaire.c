#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>


/**
 * print_char - Écris un caractere
 * @args: type
 * Return: 1 ( pas d'erreur )
 */
 
  // pour avoir du binaire il faut diviser par 2 autant de fois jusqu'à ce que ça soit plus divisible par 2.
 // le reste de la division (modulo) est lu dans le sens du bas vers le haut. elle sera forcement stocké dans un tableau.
 // mais je n'arrive pas à faire l'algo. Merci de votre aide


int print_conv_binaire(va_list args) 
{
int index = 0;
int cpindex;
char *binaire;
int num = va_arg(args, int);
 
binaire = malloc(33); 
 
while(num > 0)
{
    if (num%2 == 1)
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
cpindex = index-1;
while(cpindex!=0)
{
    _write(binaire[cpindex]);
    cpindex--;
}
 
return (index-1);    
}
