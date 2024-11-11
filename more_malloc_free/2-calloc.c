#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocate memory of an array
* @nmemb: nbr elements
* @size: taille de l'elt
* Return: NULL if 0, si malloc fails null
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return(NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);;
}
