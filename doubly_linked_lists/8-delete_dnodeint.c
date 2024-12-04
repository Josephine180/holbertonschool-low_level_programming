#include "lists.h"

/**
* delete_dnodeint_at_index - delete a node at index of dliked list
* @head: pointer to pointer on the first node of the list
* @index: index of a node to delete
* Return: 1 if the delete is good, -1 if not
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;
while (*head == NULL)
return (-1);
if (index == 0)
{
*head = current->next;
if (current->next)
current->next->prev = NULL;
free(current);
return (1);
}
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
return (-1);
if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
