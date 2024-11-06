#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - mesure la taille de la string
* @s: pointeur de debut
* Return: longueur de la string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
/* fin de la string donc result est 0*/
{
return (0);
}
return (1) + _strlen_recursion(s + 1);
}
