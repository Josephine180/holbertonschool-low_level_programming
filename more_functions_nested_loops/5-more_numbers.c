#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
* more_numbers - print 10 times the number from 0 to 14
*
* Return : success
*/

void more_numbers(void)
{
int i;

for (i  = 0; i < 10; i++)
{
write(1, "01234567891011121314\n", 21);
}
}
