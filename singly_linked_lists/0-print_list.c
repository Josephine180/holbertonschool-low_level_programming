#include "lists.h"

/**
* print_list - print the list
* @h: ptr head on the first node of the list
* Description: the list must be print and we use pointeurs
* Return: number of nodes
*/


size_t print_list(const list_t *h)
{
size_t count = 0;
size_t len = 0;
const list_t *current = h;
if (current == NULL)
{
return (count);
}
while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
len = 0;
while (current->str[len] != '\0')
{
len++;
}
printf("[%lu] %s\n", len, current->str);
}
count++;
current = current->next;
}
return (count);
}
