#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* -islower - check
* @c : caractere check
* Description : osef
* Return: success
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}


