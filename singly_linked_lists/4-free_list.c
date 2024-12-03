#include "lists.h"

/**
* free_list - function that frees the list
* @head: pointeurs on the beggining of the list
* Return: nothing
*/

void free_list(list_t *head)
{
list_t *current = head;
while (current)
{
head = head->next;
if (current->str)
free(current->str);
free(current);
}
}
