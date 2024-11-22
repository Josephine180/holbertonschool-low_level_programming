#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - print a character.
* @args: va_list qui contient un arg a printer
* Description: extrait un caractere de va_list
* print
*/
void print_char(va_list args)
{
char c;
c = va_arg(args, int);
printf("%c", c);
}
/**
* print_int - print a integer
* @args: va_list qui contient un arg a integer
* Description: extrait un caractere de va_list
* print
*/
void print_int(va_list args)
{
int i;
i = va_arg(args, int);
printf("%d", i);
}
/**
* print_float - print a number
* @args: va_list qui contient un arg a number
* Description: extrait un caractere de va_list
* print
*/
void print_float(va_list args)
{
float f;
f = va_arg(args, double);
printf("%f", f);
}
/**
* print_str - print a string.
* @args: va_list qui contient un arg a string
* Description: extrait un caractere de va_list
* print
*/
void print_str(va_list args)
{
char *s;
s = va_arg(args, char *);
if (!s)
{
printf("(nil)");
return;
}
printf("%s", s);
}
/**
* print_all - print tout.
* @format: va_list  des elements a printer
* Description: la fonction print les valeurs des args
* retour a la ligne
*/
void print_all(const char * const format, ...)
{
print_t print_fun[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};
va_list args;
int i = 0;
int j = 0;
char *separator = "";
va_start(args, format);
while (format && format[i])
{
while (print_fun[j].specifier)
{
if (*print_fun[j].specifier == format[i])
{
printf("%s", separator);
print_fun[j].f(args);
separator = ", ";
}
j++;
}
j = 0;
i++;
}
printf("\n");
va_end(args);
}
