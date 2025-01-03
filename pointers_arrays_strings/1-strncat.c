#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncat - the function concatenates two strings & n octets from src
* @dest: pointeur destination
* @src: pointeur source
* @n: n bytes to copy from src
* Return: pointeur on the string dest
*/

char *_strncat(char *dest, char *src, int n)
{
char  *ptr;
ptr = dest;
/* marquer debut de dest */
while (*dest != '\0')
{
dest++;
/* on bouge dest jusqua la fin */
}
while (n > 0 && *src != '\0')
/* tant que n est superieur a 0 il y a des caracteres a copier */
/* il ne faut pas depasser src */
{
*dest = *src;
/* = ajoute */
dest++;
src++;
n--;
/* reduction nombre caractere a copier */
/* decrementation de n a chaque caractere copie */
}
*dest = '\0';
return (ptr);
}
