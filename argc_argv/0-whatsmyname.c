#include <stdio.h>

/**
* main - Entry point
* @argc: nbr argument
* @argv: aray argument
* Return: 0 (success)
*/

int main(int argc, char **argv)
{
printf("%s\n", argv[0]);
if (argc == '\0')
printf("argc is used");
return (0);
}
