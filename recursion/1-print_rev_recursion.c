#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - print a reverse string
* @s : pointeur
* Return: revers string
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
/* on atteint la fin de la string */
{
return;
/* on sort de la fonction */
}
_print_rev_recursion(s + 1);
/* on avance en recursion d'un caractere jusqu'a la fin */
_putchar(*s);
/* on imprime les caracteres et recursion donc */
/* le dernier est le premier */
}
