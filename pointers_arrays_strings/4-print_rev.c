#include <stdio.h>
#include "main.h"

/**
* print_rev - print in reverse
* @s : caractere a pointer
* Result : print in reverse
*/

void print_rev(char *s)
{ 
char *ptr = s;
while(*ptr)
{
ptr++;
}
ptr--;
while(ptr >= s)
{
_putchar(*ptr--);
}
_putchar('\n');
}
