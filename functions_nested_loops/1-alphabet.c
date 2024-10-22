#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - writes the character c to stdout
*
* Description: osef
* Return: On success 1
*/

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar ('\n');
}
