#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - helper
 * @n: 1 parametre
 * @x: parametre comparaison
 * Return: if n have a natural square -1
 */

int _sqrt_recursion_helper(int n, int x)
{
/* cas de base: si x*x==n, c la racine carrée*/
if (x * x == n)
return (x);
/* cas ou x*x depasse n* pas de racine carrée*/
if (x * x > n)
return (-1);
/* on appelle recursivement */
return (_sqrt_recursion_helper(n, x + 1));
}

/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: The number we want to find the square root of.
 * Return: The square root if it exists, or -1 if it does not.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 0));
}
