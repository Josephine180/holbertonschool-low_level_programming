File Edit Options Buffers Tools C Help                                                                                                                                                                                                                                 
#include <stdio.h>
#include "main.h"
/**
* print_rev - print in reverse 
* @s : caractere a pointer
* Result : print in reverse
*/

void rev_string(char *s)
{
int left = 0;
int right = 0;
while (s[right] !='\0')
{
right++;
}
right--;
while (left < right)
{
char temp = s[left];
s[left] = s[right];
s[right] = temp;
left++;
right--;
}
}
