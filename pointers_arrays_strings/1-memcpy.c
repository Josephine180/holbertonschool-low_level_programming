#include "main.h"
#include <string.h>

/**
* _memcpy - function that copies memory area
* @dest: pointer 1
* @src: pointer
* @n: pointer
* Return: area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
while (n > 0)
{
*dest = *src;
src++;
dest++;
n--;
}
return (dest_ptr);
}
