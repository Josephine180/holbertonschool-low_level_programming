#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* * _strncpy - the function concatenates two strings & n octets from src
* @dest: pointeur destination
* @src: pointeur source
* @n: n bytes to copy from src
* Return: pointeur on the string dest
*/


char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest; 
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;          
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (ptr);
}
