#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - calculer la longueur d'une ligne
* @s : num
* Return: success
*/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
