#include <string.h>
#include "main.h"

/**
* _strpbrk - functiton locates the first occurence in the string s
* @s: pointers
* @accept: pointers 2
* Return: first occurence string
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
/* check si le character in s is in accept */
{
if (*s == *a)
return (s);
/* pointer  sur le caractere qui match */
a++;
/* on bouge sur les autres caracteres */
}
s++;
}
return (NULL);
}


