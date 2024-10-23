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
 if (i *j > 9)
   {
     _putchar(i * j / 10 + '0');
    
     else if ( j > 0 )
   {
     _putchar(' ');
     _putchar(i * j % 10 + '0');
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


