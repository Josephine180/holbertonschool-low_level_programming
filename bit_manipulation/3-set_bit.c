#include "main.h"
/*
* set_bit - function that set the value of a bit to 1 at an index
* @n: pointer on the number to modify
* @index: index of the bit to set (starting from 0)
* Return: 1 if it worked, -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index > 63)
return (-1);
mask = 1 << index;
/* creation mask pour index donné*/
*n = *n | mask;
/* applique le mask avec Or */
return (1);
}

