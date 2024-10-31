#include <stdio.h>

int _atoi(char *s)
{
int sign = 1;
int num, i, j, verif;
verif = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
verif = 1;
else if (verif == 1)
break;
if (s[i] == '-')
sign = sign * -1;
}
verif = 0;
num = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] >= '0' && s[j] <= '9')
{
verif = 1;
num = num * 10 + s[j] - '0';
if (num > 2147483647)
   return ((sign == 1) ? 2147483647 : -2147483647);
 }
else if (verif == 1)
break;
}
return (num * sign);
}




