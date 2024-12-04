#include "main.h"

/**
* get_bit - function that returns the value of a bit
* at  a given index.
* @n: number we want extract bit
* @index: index starting from 0 of the bit we cant to get
* Return: value of the bit at index or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 63)
return (-1);
/* on verifie que n est valide est pas sup hors limite */
/* si hors limite = error donc -1 */
n = n >> index;
/* on décale sur la droite n de index */
return (n & 1);
/* & pour comparer si c'est un 1 ou 0 */
}
