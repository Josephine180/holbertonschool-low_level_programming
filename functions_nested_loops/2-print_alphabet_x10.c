#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*print_alphabet_x10 - multiplie dix fois
*
* Description : multiplier
* Return: On success
*/

void print_alphabet_x10(void)
{
char letter;

 for (int i = 0; i < 10; i++)
	for(char letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar ('\n');
}
