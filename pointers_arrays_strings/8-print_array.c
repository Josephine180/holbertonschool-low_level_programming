#include "main.h"
#include <stdio.h>
/**
* print_array - print elements from an array
* @a: pointer
* @n: pointer
* Result: elements
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
/* declaration  i pour faire tout les n du tableau */
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
