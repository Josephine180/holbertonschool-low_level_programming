#include "main.h"
#include <string.h>

/**
* _strspn - gets the length of a prefix substring
* @s: first pointers
* @accept: parametre
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
while (*s)
{
char *a = accept;
int found = 0;
while (*a)
{
if (*s == *a)
{
length++;
found = 1;
break;
}
a++;
}
if (!found)
{
break;
}
s++;
}
return (length);
}
