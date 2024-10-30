#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *_strcpy - print a function 
* 
* Result: string
*/
/*
char *_strcpy(char *dest, char *src)
{
  {
  char *ptr = dest;
  while (*dest = *src)
dest++;
src++;
}
*dest = '\0';
 return(ptr);
}
*/

char *_strcpy(char *dest, const char *src) {
    char *ptr = dest; 
    while ((*ptr++ = *src++));
    return dest;
}
