#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - writes the character c to stdout
*
*
* Return: On success 1.
*/

int main(void)
{
write(1, "_putchar\n", 9);
return (0);
}
