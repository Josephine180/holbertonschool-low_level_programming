#include <stdio.h>

/**
* main - entry point
* @argc: first parametre
* @argv: second parametre
* Return: 0 success
*/

int main(int argc, char *argv[])
{
int count = 0;
int i;
(void)argv;
for (i = 1; i < argc; i++)
{
count++;
}
printf("%d\n", count);
return (0);
}
