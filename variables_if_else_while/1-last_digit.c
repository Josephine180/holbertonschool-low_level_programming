#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
int last_digit;   
srand(time(0));
n = rand() - RAND_MAX / 2; 
last_digit = n % 10;
/*if (last_digit < 0)
{
last_digit = -last_digit;
}*/
printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("%d and is greater than 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else
{
printf("%d and is less than 6 and not 0\n", last_digit);
}
return (0);
}
