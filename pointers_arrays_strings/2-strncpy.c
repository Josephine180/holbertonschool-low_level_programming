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


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
