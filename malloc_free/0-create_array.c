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
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
a[i] = c;
i++;
}
return (a);
}

