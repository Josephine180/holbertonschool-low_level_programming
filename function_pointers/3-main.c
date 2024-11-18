#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* main - Performs simple operations based on user input.
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, error codes on failure
*/

int main(int argc, char *argv[])
{
int num1, num2;
int (*op_func)(int, int);
/* Function pointer for the operation */
if (argc != 4)
/* If the number of arguments is incorrect */
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
/* Convert first argument to integer */
num2 = atoi(argv[3]);
/* Convert third argument to integer */
op_func = get_op_func(argv[2]);
/* Get the corresponding function pointer */
if (op_func == NULL)
/* If the operator is invalid */
{
printf("Error\n");
exit(99);
}
printf("%d\n", op_func(num1, num2));
/* Call the function and print the result */
return (0);
}
