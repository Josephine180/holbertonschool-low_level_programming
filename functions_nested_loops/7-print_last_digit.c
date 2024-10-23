#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* print_last_digit - check the code
* @n: The number to test
*
* Return: 1 if n is greater than 0
* 
*/

int print_last_digit(int n)
{
int last_digit = n % 10;
 if (last_digit < 0)
        {
	  last_digit = -last_digit;
        }
 char digit_char = last_digit + '0';
 write(1, &digit_char, 1);
 return (last_digit);
}
