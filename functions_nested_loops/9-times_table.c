#include "main.h"
#include <stdio.h>

/**
* times_table - check the code
*
* 
* 
*/

void times_table(void)
{
int i;
int result;
int j;
 
for (i=0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{    
result = i * j;
 if (result < 10 )
   {
     _putchar(' ');
     _putchar(result + '0');
   }
 else
   {
     _putchar((result / 10) + '0');
     _putchar((result % 10) + '0');
   }
 if (j < 9)
   {
     _putchar(',');
     _putchar(' ');
   }
 }
 _putchar('\n');
 }
}
