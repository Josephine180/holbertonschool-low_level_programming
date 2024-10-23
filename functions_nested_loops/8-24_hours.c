#include "main.h"
#include <stdio.h>
#include
/**
 * print_sign - check the code
 * @n: The number to test
 *
 * Return: 1 if n is greater than 0
 * 0 if n = 0 or -1 if less than 0.
 */

void jack_bauer(void)
{
int hour, minute;
 for ( hour = 0; hour <=23; hour++)
{
  for ( minute = 0; minute <= 59 ; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
