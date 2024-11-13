#include "main.h"
#include <stdlib.h>

/**
* _strdup - renvoi un pointeur sur nouvelle chaine
* @str: string
* Return: Null si str null, oui pointers
*/

char *_strdup(char *str)
{
int a = 0, i = 1;
char *s;
if (str == NULL)
/* str est null donc on retourne null */
return (NULL);
while (str[i])
/* on compte la longueur de la chaine */
{
i++;
}
s = malloc((sizeof(char) * 1) + 1);
/* alloue la memoire pour la chaine */
if (s == NULL)
return (NULL);
while (a < i)
/* copie la memoire la chaine allouée */
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
