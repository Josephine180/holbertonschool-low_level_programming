#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
result = malloc(sizeof(char) * (len1 + len2 + 1));
/* allouer memoire pr stsocker chaine resultante */
if (result == NULL)
/*verifie si malloc echoue */
return (NULL);
strcpy(result, s1);
/* on copie la chaine s1 dans la memoire allouée */
strcat(result, s2);
/* ajoute chaine S2 a la fin*/
result[len1 + len2]='\0';
return (result);
}
