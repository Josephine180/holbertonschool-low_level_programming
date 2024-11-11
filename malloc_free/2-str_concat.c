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
int len1, len2;

if (s1 == NULL)
return (NULL);
/*treat as empty string */
if (s2 == NULL)
return (NULL);
/* treat as empty string */
len1 = strlen(s1);
len2 = strlen(s2);
result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);
strcpy(result, s1);
strcat(result, s2);
return (result);
}

