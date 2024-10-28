#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* print_most_numbers - print de 0 a 9 sans 2 et 4
*
* Return: 0 a 9 sans 2 et 4 
*/
/**
void print_most_numbers(void)
{
for(int i = 0; i <= 9; i++)
{
if ( i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
*/

void print_most_numbers(void) {
    for (int i = 0; i <= 9; i++) { // Loop from 0 to 9
        if (i != 2 && i != 4) {     // Skip 2 and 4
            _putchar(i + '0');      // Convert int to char and print
        }
    }
    _putchar('\n'); // Print a newline character
}
