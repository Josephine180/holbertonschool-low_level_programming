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

 for (i=0; i <= 9; i++)

   {
     result = 9*i ;
     if ( i==0 )
       {
	 printf("%d", result);
       }
     else
       {
	 printf (",%d"; result);
       }
   }
 printf("\n");
}
