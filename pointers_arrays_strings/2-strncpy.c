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
char  *ptr;
ptr = dest;
while (n > 0)
/* on continue dans dest apres src */
{
  if(*src != '\0')
    {
      *dest = *src;
      src++;
    }
  else
    {
      *dest = '\0';
    }
/* on met des caractere nuls car on est parti de src */
dest++;
n--;
}
*dest = '\0';
return (ptr);
}
