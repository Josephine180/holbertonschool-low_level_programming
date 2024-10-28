#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
* _isupper - check upercase character
* @c : caractere c a determiner
* Return: 1 si c est en majuscule
*/

int _isupper(int c)
{
if( c >= 'A' && c <= 'Z' )
{
putchar('1');
return(1); 
}
else
{
putchar('0');
return(0);
}
}
