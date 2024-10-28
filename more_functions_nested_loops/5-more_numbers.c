#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
* more_numbers - print 10 times the number from 0 to 14
*
* Return : success
*/

  void more_numbers(void) {
    for(int count = 0; count < 10; count++) { // Loop to print 10 times
        for(int i = 0; i <= 14; i++) {         // Loop from 0 to 14
            if (i >= 10) {
                _putchar('1');                   // Print '1' for numbers 10 to 14
                _putchar(i % 10 + '0');         // Print the units digit
            } else {
                _putchar(i + '0');               // Print single digit numbers
            }
}
_putchar('\n'); // Print a newline after each set
}
}
