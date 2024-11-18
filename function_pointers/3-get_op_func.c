#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
* get_op_func - select the correct function
* @s: operator as argument
* Return: NULL si ca match pas ou pointeur op-add
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{
"+", op_add
},
{
"-", op_sub
},
{
"*", op_mul
},
{
"/", op_div
},
{
"%", op_mod
},
{
NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
