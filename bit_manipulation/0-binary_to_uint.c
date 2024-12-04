#include "main.h"

/**
* binary_to_uint - functions that convert a char on an unsigned int
* @b: pointers to a string of 0 and 1 char
* Return: converted number or 0 if one or more chars
* that is not 0 or 1, b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int result = 0;
if (b == NULL) /* on verifie si la chaîne est null */
return (0);
for (i = 0; b[i] != '\0'; i++)
/* on verifie si tt les caracteres son valides */
{
if (b[i] != '0' && b[i] != '1')
return (0);
/* conversion binaire décimal */
result = result * 2; /* on décale à gauche */
if (b[i] == '1')
result += 1; /* ajouter 1 si c'est 1*/
}
/* retourner résultat */
return (result);
}
