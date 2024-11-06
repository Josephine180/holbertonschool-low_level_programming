#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* factorial - gives the factorial of a given number
* @n: parametre
* Result: n inferior a 0 donc -1
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
if (n > 0)
return (n * factorial(n - 1));
return (n);
}
