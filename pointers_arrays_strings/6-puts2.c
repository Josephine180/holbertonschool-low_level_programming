#include "main.h"
#include <stdio.h>

/**
* puts2 - print every other character of a string
* @str - pointeur
* Result: success
*/

void puts2(char *str)
{
  int i;
if (str == NULL)
return;
 for (i = 0; str[i] != '\0'; i += 2)
{
  if (str[i] == 'H' && i != 0)
    {
      _putchar('\n');
      return;
    }
_putchar(str[i]);
}
_putchar('\n');
}
