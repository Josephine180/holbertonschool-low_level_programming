#include "main.h"
#include <stdio.h>

/**
* main - main
* @argc: argument 1
* @argv: argument 2
* Return: 0
*/

int main(int argc, char **argv)
{
printf("%s\n", argv[0]);
if (argc == '\0')
printf("argc is used");
return (0);
}