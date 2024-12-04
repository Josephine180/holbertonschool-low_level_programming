#include "lists.h"
/**
* sum_dlistint - functions that returns sum of data of a dlinked list
* @head: pointeur on the first node of the list
* Return: sum of the data of the list or 0 if it's empty
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;
while (head == NULL)
return (0);
while (current != NULL)
{
sum += current->n;
/* ajoute la valeur du noeud à la somme */
current = current->next;
/* on passe au suivant */
}
return (sum);
}
