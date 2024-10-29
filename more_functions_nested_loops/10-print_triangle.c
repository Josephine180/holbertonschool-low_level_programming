#include "main.h"
#include <stdio.h>

/**
* print_triangle - function print the triangle
* @size: the size of the triangle
* Return: success
*/

void print_triangle(int size)
{
int i;
int j;
int k;
if (size <= 0)
{
 _putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
