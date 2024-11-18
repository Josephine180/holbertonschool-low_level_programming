#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - returns the sum of a and b
* @a: first
* @b: second
* Return: sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - returns the difference of a and b
* @a: first
* @b: second
* Return: difference of a and b
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplication a and b
* @a: first
* @b: second
* Return: multiplication
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - division a and b
* @a: first
* @b: second
* Return: division
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - modulo a and b
* @a: first
* @b: second
* Return: modulo
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
