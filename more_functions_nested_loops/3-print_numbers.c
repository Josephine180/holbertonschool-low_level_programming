#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* print_numbers - write the number from 0 to 9 
* @i : caractere to write
* Return : success
*/

void print_numbers()
{
int i;
for ( i = '0'; i <= '9'; i ++ )
{
_putchar('0'+i);
}
{
_putchar('\n');
}
}
