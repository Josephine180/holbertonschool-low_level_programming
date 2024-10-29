#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* print_most_numbers - print de 0 a 9 sans 2 et 4
*
* Return: 0 a 9 sans 2 et 4
*/


void print_most_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i == 2 || i == 4)
continue;
}
_putchar(i +'0');
}
_putchar('\n');
}
