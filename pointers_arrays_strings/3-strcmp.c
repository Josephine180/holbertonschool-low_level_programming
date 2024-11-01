#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - compares two string
* @s1: pointers
* @s2: pointers
* Return: s1 < s2 : negative
*  s2 < s1: positiv
* s2 =s1 = 0
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
