#include <stdio.h>
#include "main.h"

/**
* print_diagonal - faire une ligne de \
* @n : caractere 
* Result : n inferieur a 0 = '\n'
*/

void print_diagonal(int n)
{
int i;
int j;
 
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j=0; j < i; j++)
{
_putchar(' ');
}
_putchar ('\\');
 _putchar ('\n');
}
}
}
