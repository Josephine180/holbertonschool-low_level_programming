#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *string_toupper - convert lowercase in uppercase
* @ptr: pointers
* Return: minuscule en majuscule
*/

char *string_toupper(char *ptr)
{
char *original = ptr;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
ptr++;
}
return (original);
}
