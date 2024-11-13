#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concacts two strings
* @s1: first parameters
* @s2: second parameters
* Return: addition
*/

char *str_concat(char *s1, char *s2)
{
char *result;
/* declaration pointeur chaine concatenée*/
int len1, len2;
/*variables pr stocker longueur chaines*/
if (s1 == NULL)
s1 = "";
/*treat as empty string */
if (s2 == NULL)
s2 = "";
/* treat as empty string */
len1 = strlen(s1);
/*calcule longueur chaine s1*/
len2 = strlen(s2);
/*calcule longueur chaine s2*/
result = malloc(((len1 + len2) + 1) * sizeof(char));
/* allouer memoire pr stsocker chaine resultante*/
if (result == NULL)
/*verifie si malloc echoue */
{
return (NULL);
}
strncat(result, s1,len1);
strncat(result, s2, len2);
result += '\0';
return(result);
}
