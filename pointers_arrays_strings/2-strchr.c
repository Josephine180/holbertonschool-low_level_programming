#include "main.h"
#include <string.h>

/**
* *_strchr - locates a character in a string
* @s: pointer
* @c: parameter
* Return: c or null
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
else
s++;
}
return (NULL);
}
