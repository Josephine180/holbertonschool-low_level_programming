#include "main.h"
#include <stdio.h>

/**
* _pow_recursion - returns value of x raised to the power y
* @x: first parameter
* @y: second parameter
* Return: 0 or -1
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (0);
if (y == 0 && x != 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
