#include <stdio.h>
#include "main.h"

/**
* print_line - creer une ligne de caracteres
* @n : caractere n 
* Result : si n inferieur et 0 ou 0 alors '\n' 
*/

void print_line(int n)
{
int i;
if ( n <= 0 )
{
 _putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar ('\n');
}
}
