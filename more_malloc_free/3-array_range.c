#include "main.h"
#include <stdlib.h>

/**
* array_range - create array of integers
* @min: minimum value
* @max: max value
* Return: min > max return NULL, malloc fails null
*/

int *array_range(int min, int max)
{
int *arr;
int i;
int size;
if (min > max)
return (NULL);
/* verifie que min < max sinon null */
size = ((max - min) + 1);
/* determine nbr elements du tableau */
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
