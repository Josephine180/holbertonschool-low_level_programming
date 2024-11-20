#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_string - print strings follow by a new line
* @separator: pointeur
* @n: parametre n arguments
* Return: rien
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
/* déclare variable i pr tt les args variadiques for */
va_list args;
/* gere les arguments passés à la fonction*/
va_start(args, n);
/*initialisation variable args pour traiter les args */
/* elle prend en arg le dernier para (n)*/
for (i = 0; i < n; i++)
/* boucle*/
{
const char * str = va_arg(args, const char *);
/*extrait prochain elt de la liste */
/* arg de type const char * (chaine de caracteres*/
/* resultat stocké dans str*/
if (str == NULL)
/* si arg null = nil */
{
printf("(nil)");
/* si str null nil à la place */
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
