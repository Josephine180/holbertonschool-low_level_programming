#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *leet - change letter in number
* @str: pointer
* Return: leet in number
*/

char *leet(char *str)
{
char *ptr = str;
char leet_map[256] = {0};
leet_map['a'] = '4';
leet_map['A'] = '4';
leet_map['e'] = '3';
leet_map['E'] = '3';
leet_map['o'] = '0';
leet_map['O'] = '0';
leet_map['t'] = '7';
leet_map['T'] = '7';
leet_map['l'] = '1';
leet_map['L'] = '1';
while (*ptr)
{
if (leet_map[(unsigned char)*ptr])
{
*ptr = leet_map[(unsigned char)*ptr];
}
ptr++;
}
return (str);
}
