#include <stdio.h>

int _atoi(char *s)
{
int sign = 1; 
unsigned int number = 0;    
unsigned int limit = 2147483647;
while (*s)
{
if (*s == ' ')
{
s++;
continue;
}
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
if (number > (limit - (*s - '0')) / 10)
{
return (sign == 1) ? 2147483647 : -2147483648;
}
number = number * 10 + (*s - '0');
s++;
}
break;
}
return sign * number;
}
