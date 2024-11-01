#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *leet - change letter in number
* @str: pointer
* Return: leet in number
*/

char *leet(char *str)
{
char *ptr = str;
while (*ptr)
{
if (*ptr == 'a' || *ptr == 'A')
{
*ptr = '4';
}
else (*ptr == 'e' || *ptr == 'E')
{
*ptr = '3';
}
else (*ptr == 'o' || *ptr == 'O')
{
*ptr = '0';
}
else(*ptr == 't' || *ptr == 'T')
{
*ptr = '7';
}
else (*ptr == 'l' || *ptr == 'L')
{
*ptr = '1';
}
ptr++;
}
return (str);
}
