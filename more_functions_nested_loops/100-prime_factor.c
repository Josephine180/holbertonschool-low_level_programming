#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - value of factorisation
* @n: pointers
* Result: number
*/

long largest_prime_factor(long n)
{
long max_prime = -1;
long i;
while (n % 2 == 0)
{
max_prime = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
max_prime = i;
n /= i;
}
}
if (n > 2)
{
max_prime = n;
}
return (max_prime);
}

int main(void)
{
long number = 612852475143;
long result = largest_prime_factor(number);
printf("%ld\n", result);
return (0);
}
