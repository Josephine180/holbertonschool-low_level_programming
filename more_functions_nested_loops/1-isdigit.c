#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - check the numer 0 through 9
* @c : number to check
* Return: 1 if the number is between 0 and 9, otherwise 0 if not
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
