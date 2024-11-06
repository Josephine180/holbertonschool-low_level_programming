#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - input integer is a prime number
 * @n: parameter number must be a prime
 * Return: 1 if it is or 0 if it's not
 */

int is_prime_number(int n)
{
/* Handle base cases */
if (n <= 1)
{
return (0);
/* Numbers <= 1 are not prime*/
}
if (n == 2)
{
return (1);
/*2 is prime*/
}
if (n % 2 == 0)
{
return (0);
/*Even numbers greater than 2 are not prime*/
}
/* Check for divisibility up to sqrt(n)*/
int limit = (int) sqrt(n);
int i;
for (i = 3; i <= limit; i += 2)
{
/* Only check odd numbers */
if (n % i == 0)
{
return (0);
}
}
return (1);
}
