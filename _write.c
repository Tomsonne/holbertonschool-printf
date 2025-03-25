#include <unistd.h>
#include "holberton.h"

/**
 * _write - Écris le caractere c placé en parametre
 * @c: C est le caratère a afficher
 * 1 sert a préciser a write qu'on va agir en sortie standart (stdout)
 * &c est l'adresse du caractère c
 * 1 est le nombre d'octets ecris
 * Return: 1 car 1 octets a afficher
 */

int _write(char c)
{
return (write(1, &c, 1));
}