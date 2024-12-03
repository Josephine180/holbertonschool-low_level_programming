#include "lists.h"

/**
* free_list - function that frees the list
* @head: pointeurs on the beggining of the list
* Return: nothing
*/

void free_list(list_t *head)
{
list_t *current = head;
list_t *new_node;
while (current != NULL)
{
new_node = current->next;
free(current->str);
free(current);
current = new_node;
}
}
