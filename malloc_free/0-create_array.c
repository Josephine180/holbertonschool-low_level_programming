#include "main.h"
#include <stdlib.h>

/**
* create_array - create an array of chars
* @size: nombre d'elements
* @c: taille d'elements
* Return: 0 if NULL, pointers sinon
*/

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;

if (size == 0)
/* on verifie si la taille est nulle */
{
return (NULL);
/* si taille nulle on retourne null */
}
a = malloc(size * sizeof(char));
/*on alloue la mémoire pour size caracteres */
if (a == NULL)
/* on verifie si l'allocation a echoué */
{
return (NULL);
/** on retourne null si ca echoue */
}
i = 0;
/* on initialise chaque element du tableau */
while (i < size)
{
a[i] = c;
/* on remplit le tableau avec le caractere c */
i++;
}
return (a);
/* on retourne le tableau */
}
