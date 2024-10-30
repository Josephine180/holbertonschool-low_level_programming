#include "main.h"
#include <stdio.h>

/**
* puts2 - print every other character of a string
* @str - pointeur
* Result: success
*/

void puts2(char *str)
{
  int len;
  int i;
if (str == NULL)
return;
 for (len = 0; str[len] != '\0'; len++)
 for (i = 0; str[i] != '\0'; i += 2)
{
  if (i >= len)
    {
      _putchar('\n');
      return;
    }
_putchar(str[i]);
}
_putchar('\n');
}
