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
/* verification liste vide */
return (-1);
if (index == 0)
/* on supprime si c'est en en-tête de liste */
{
*head = current->next;/* deplace le noeud vers le deuxieme noeud */
if (current->next) /* si la liste n'a pas qu'un elt */
current->next->prev = NULL;
free(current);/* on libere l'ancien premier noeud */
return (1);
}
while (current != NULL && i < index)
/* tant que current n'est pas egal a 0 et i dans index */
{
current = current->next;
i++;
}
/* mise à jour des ptr pr supprimer le noeud au milieu ou fin */
if (current == NULL)
return (-1);
if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
