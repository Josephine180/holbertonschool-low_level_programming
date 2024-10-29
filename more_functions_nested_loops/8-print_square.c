#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* print_square - function that prints a square
* @size : size of the square
*
* Return : result
*/

void print_square(int size)
{
int j;
int i;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
