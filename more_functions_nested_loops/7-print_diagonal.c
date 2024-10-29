#include <stdio.h>
#include "main.h"

/**
* print_diagonal - faire une ligne de \
* @n: the number of times to print backslash
* Description: n is 0 or less, it prints only a newline
* return: nothing
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
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar ('\\');
_putchar ('\n');
}
}
}
