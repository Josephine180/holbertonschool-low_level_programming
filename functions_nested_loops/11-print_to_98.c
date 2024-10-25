#include <stdio.h>
#include "main.h"

/**
*
* print_to_98 : print number from n to 98
* @n: number
*
* Return: nombres jusqu'a 98
*/

void print_to_98(int n)
  if (n < 98 );
{
  for (; n <= 98; n++)
    {
      printf("%d, ", n);
    }
  if ( n > 98);
  for(; n > 98; n--)
    {
      printf("%d, ", n);
    }
  putchar('\n');
}
