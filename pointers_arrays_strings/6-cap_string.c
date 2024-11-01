#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *cap_string - capitalize letters
* @str: pointer
* Return: 0
*/
char *cap_string(char *str)
{
int capitalize = 1;
char separators[] = " \t\n,;.!?\"(){}";
char *ptr = str;
int i;
for (*ptr = *str; *ptr != '\0'; ptr++)
{
if (capitalize && *ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
capitalize = 0;
for (i = 0; separators[i] != '\0'; i++)
{
if (*ptr == separators[i])
{
capitalize = 1;
}
}
}
return (str);
}
