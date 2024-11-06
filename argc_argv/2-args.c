#include <stdio.h>

/**
* main - entry point
* @argc: first parameter
* @argv: second parameter
* Return: arguments
*/

int main(int argc, char *argv[])
{
int i;
(void)argv;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
