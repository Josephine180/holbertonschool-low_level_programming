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
/* creation pointeur*/
while (*dest != '\0')
/* tant que dest n'est pas a la fin il avance */ 
{
dest++;
}
while (*src != '\0')
/* en c = assigne une valeur, donc on copie src dans dest */
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return ptr;
}
