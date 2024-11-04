#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* *_memset - function fills with memory
* @s: pointer
* @b: value
* @n: value
* Return: pointer memory a
*/


char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (s < ptr + n)
{
*s = b;
s++;
}
return (s);
}
