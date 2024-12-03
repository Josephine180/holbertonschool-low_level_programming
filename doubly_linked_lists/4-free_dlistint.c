#include "lists.h"

/**
* free_dlistint - function that frees a list
* @head: pointeur on the first memory adresse of a list
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *new_node;
while (current != NULL)
{
new_node = current->next;
free(current);
current = new_node;
}
}
