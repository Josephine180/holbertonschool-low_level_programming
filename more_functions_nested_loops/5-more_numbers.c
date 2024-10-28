#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
* more_numbers - print 10 times the number from 0 to 14
*
* Return : success
*/

  void more_numbers(void) {
    for(int count = 0; count < 10; count++) { 
        for(int i = 0; i <= 14; i++) {         
            if (i >= 10) {
                _putchar('1');
                _putchar(i % 10 + '0');
            } else {
                _putchar(i + '0');
            }
}
_putchar('\n');
}
}
