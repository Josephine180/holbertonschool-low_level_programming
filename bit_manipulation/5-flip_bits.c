#include "main.h"
/**
* flip_bits - Returns the number of bits we need to flip
*             to get from one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
/* utilisation xor pour trouver les bits différents */
unsigned int count = 0;
/* compteur pour les bits à 1 */
while (xor_result)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
