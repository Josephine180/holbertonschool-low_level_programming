#include <stdio.h>
#include "main.h"

/**
* *_strstr - finds the occurence of needle in haystack
* @haystack: firt pointer
* @needle: second pointer
* Return: pointer beginning or NULL
*/

char *_strstr(char *haystack, char *needle)
{
/* Cas 1 : si needle est une chaîne vide, retourner haystack */
if (*needle == '\0')
{
return (NULL);
}
/* Cas 2: si haystack est vide et needle n'est pas vide, retourner NULL */
if (*haystack == '\0')
{
return (NULL);
}
while (*haystack != '\0')
{
haystack++;
/* premier caractere de haystack au premier caractere de needle */
if (*haystack == *needle)
{
char *h = haystack;
char *n = needle;
/* comparer les caracteres de haystack et needle */
while (*h != '\0' && *n != '\0' && *h == *n)
{
h++;
n++;
}
/* si correspondance */
if (*n == '\0')
{
return (haystack);
}
}
}
return (NULL);
}

