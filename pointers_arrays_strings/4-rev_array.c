#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* reverse_array - inverser les string
* @a: pointers
* @n: pointer
* Result: array reversed
*/

void reverse_array(int *a, int n)
{
int *i = a;
/* pointeur au debut du tableau */
int *e = a + n - 1;
/* pointeur a la fin du tableau */
int temp;
while (i < e)
{
temp = *i;
*i = *e;
*e = temp;
i++;
e--;
}
}
