#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: first parametre
* @argv: seconde parametre
* Return: result of multiplication
*/

int main(int argc, char *argv[])
{
int num1;
int num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
