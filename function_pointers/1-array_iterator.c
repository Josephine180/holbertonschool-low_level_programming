#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - exeutes each elt of an array
* @array: tableau
* @size: size of tableau
* @action: function action
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
