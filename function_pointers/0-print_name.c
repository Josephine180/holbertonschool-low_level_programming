#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - print a name
* @name: parametre premiere fonction
* @f: pointeur vers fonction
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
