#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - print numbers follow by a new line
* @separator: pointeur
* @n: parametre n arguments
* Return: rien
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);
if (n > 0)
{
printf("%d", va_arg(args, int));
for (i = 1; i < n; i++)
{
if (separator != NULL)
{
printf("%s", separator);
}
printf("%d", va_arg(args, int));
}
va_end(args);
printf("\n");
}
}
