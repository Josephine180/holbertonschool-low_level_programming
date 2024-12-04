#include "main.h"

/**
* clear_bit - function that sets a bit to 0 at a given index
* @n: Pointer to the number to modify.
* @index: The index of the bit to clear (starting from 0).
* Return: 1 if it worked, -1 if an error occurred.
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index > 63)
/* verification index valide sinon return -1*/
return (-1);
mask = ~(1 << index);
/* creation mask pour forcer bit à 1*/
/* ~ pour le mettre à 0 */
*n = *n & mask;
/* appliquer le masque avec & */
return (1);
}
