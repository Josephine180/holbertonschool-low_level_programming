#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
* int_index - search for an integer
* @array: tableau
* @size: size of the array
* @cmp: compares values of the array
* Return: 0, -1 ou 1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
{
/* on regarde si la taille est invalide */
return (-1);
}

if (cmp == NULL)
{
return (-1);
}
/* boucle pour faire l'array et faire la comparaison */
for (i = 0; i < size; i++)
/* si ca retourne pas 0 on trouve un match */
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
/* pas de match donc return -1 */
return (-1);
}
