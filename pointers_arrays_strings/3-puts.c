#include <stdio.h>
#include "main.h"

/**
* _put - write a function that prints a string , followed by a new line
* @str : pointers
* Return : success
*/

void _puts(char *str)
{
if (str == NULL)
return;
while (*str != '\0')
{
_putchar(*str);
str++;
}
printf("\n");
}
