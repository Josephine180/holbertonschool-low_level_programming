#include <stdio.h>
#include <unistd.h>
/**
* main - main
*
* Return: osef 
*/

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
if (alphabet == 'd')
alphabet++;
if(alphabet =='p')
alphabet++;
}
putchar('\n');
return (0);
}
