#include <unistd.h>
#include "main.h"

/**
 * _write - affiche le caractere sur la sortie standard (stdout)
 * @c: caratère a afficher
 * 1 sert a préciser a write qu'on va agir en sortie standart (stdout)
 * &c est l'adresse du caractère c
 * 1 est le nombre d'octets ecris
 * Return: toujours 1 ( 1 octet est ecrit)
 */

int _write(char c)
{
return (write(1, &c, 1));
}
