#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/** 
* print_sign - check
* @c : caractere check
* Description : osef
* Return: success
*/

int print_sign(int n)
{
if (n > '0')
{
putchar('+');  
return (1);
}
else if (n == '0')
{
putchar('0');  
return (0);
}
 else
   {
     putchar (' ');
    return (-1);
}
}
