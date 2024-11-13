#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - add two strings
* @s1: string to cat
* @s2: string to cat
* @n: taille elt
* Return: pointer to string or null if failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
/* pointeur */
unsigned int len1;
unsigned int len2;
/*variables qui stocke les longueurs */
unsigned int i, j;
/* copient caracteres dans string */
for (len1 = 0; s1[len1] != '\0'; len1++)
{}
for (len2 = 0; s2[len2] != '\0'; len2++)
{}
/* renvoie longueur de la string 1 et 2 */
if (n >= len2)
n = len2;
/* si n >S2 on copie pas de caractere en + */
/*on veut pas dépasser s2 */
result = malloc(((len1 + len2) + 1) * sizeof(char));
if (result == NULL)
/*verifie si malloc echoue */
{
return (NULL);
}
for (i = 0; i < len1; i++)
result[i] = s1[i];
/* on parcourt tout s1 */
/* on copie tt dans result */
/* jusqu'a la fin de s1 */
/* i parcourt s1 et est copié a la mm position ds result */
for (j = 0; j < n; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return (result);
}
