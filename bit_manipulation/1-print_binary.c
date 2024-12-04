#include "main.h"

/**
* print_binary_helper - print binary function recursion
* @n: the unsigned long int number to be converted and printed.
* function takes an usigned long int and prints
* its binary representation. Checking each bit of the number
* and printing '1' or '0 for each bit starting
* from the most significant bit.Avoids printing
* leading zeros and if number is zeo its prints '0'.
* Return: nothing.
*/

void print_binary_helper(unsigned long int n)
{
if (n == 0)
return;
print_binary_helper(n >> 1);
_putchar((n & 1) ? '1' : '0');
}

/**
 * print_binary - print number binary
 * @n: number of binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
print_binary_helper(n);
}
