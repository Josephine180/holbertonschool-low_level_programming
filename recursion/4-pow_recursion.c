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
if (y == 0)
/* resultat est 1 (puissance) */
return (1);
if (y < 0)
/* programme retourne -1 */
return (-1);
/* y > 0 recursion en * x par lui m y fois*/
return (x * _pow_recursion(x, y - 1));
/* si x=2 et y=3*/
/* ex: pow_recursion(2,3)=2*_pow(2,2)*/
/* pow_recursion(2,2)= 2*_pow_rec(2,1)*/
/*etc*/
/* apres on remonte */
/* pow recursion(2,1) retourne 2*1=2*/
/*pow_recursion(2,2) retourne 2*2=4*/
/*pow_recursion(2,3) retourne 2*4=8*/
}
