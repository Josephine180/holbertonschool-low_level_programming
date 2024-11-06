#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - input integer is a prime number
 * @n: parameter number must be a prime
 * Return: 1 if it is or 0 if it's not.
 */

int is_prime_number(int n)
{
int i;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
break;
}
if (n == i)
return (1);
else
return (0);
}
