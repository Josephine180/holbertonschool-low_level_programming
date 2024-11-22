#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct print - structure qui associe format et affichage
* @specifier: type d'arguments
* @f: fonction associée pour affiche le type d'arg
*/

typedef struct print
{
char *specifier;
void (*f)(va_list args);
} print_t;



#endif
