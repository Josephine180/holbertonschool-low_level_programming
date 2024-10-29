#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the value between two integers
* @a : value
* @b : value
* Return : success
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
