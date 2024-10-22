#include <unistd.h>
#include <stdio.h>
/**
* main- main
*
* Return: success
*/

int main(void)
{
char alphabet;  
for (alphabet = '0'; alphabet <= '9'; alphabet++)
{
putchar(alphabet);
}
for ( alphabet  = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
