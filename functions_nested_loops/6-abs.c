#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _abs - check the code
* @n: The number to test
*
* Return: 1 if n is greater than 0
* 0 if n = 0 or -1 if less than 0.
*/

int _abs(int n)
{
if (n < 0)
{
return (-n);
}
return (n);
}
