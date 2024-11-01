#include "main.h"
#include <stdio.h>
#include <string.h>

/** 
* _strcat - the function concatenates two strings
* @dest: pointeur destination
* @src: pointeur source
* result: concatenation
*/

char *_strcat(char *dest, char *src)
{
char  *ptr;
ptr = dest;
 while (*src != '\0')
   {
     *dest = *src;
     dest++;
     src++;
   }
 while (*dest != '\0')
   {
     dest ++;
   }
 *dest = '\0';
 return ptr;
}
