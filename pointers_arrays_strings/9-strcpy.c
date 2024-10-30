#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *_strcpy - print a function
* @dest: pointeur
* @src: pointeur
* Result: string
* Return: strcpy
*/
char *_strcpy(char *dest, const char *src)
{
char *ptr = dest;
while ((*ptr++ = *src++));
return(dest);
}
