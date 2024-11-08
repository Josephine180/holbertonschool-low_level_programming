#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strcpy - Copies the string pointed to by src to dest
* @dest: Pointer to the destination buffer
* @src: Pointer to the source string
*
* Return: A pointer to dest (the destination buffer)
*/
char *_strcpy(char *dest, const char *src)
{
char *ptr = dest;
while
((*ptr++ = *src++));
return (dest);
}
