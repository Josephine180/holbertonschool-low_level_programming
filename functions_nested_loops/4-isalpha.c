#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/** 
* _isalpha - check
* @c : caractere check
* Description : osef
* Return: success
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
if (c >= 'A' && c<= 'Z')
{
return (1);
}
else
return (0);
}
