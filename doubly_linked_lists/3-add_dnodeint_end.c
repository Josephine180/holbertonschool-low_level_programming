#include "lists.h"
/**
* add_dnodeint_end - add a node at the end of the doubly linked list
* @head: pointeur to pointer to list_t struct (first node)
* @n: constant int, data for new node
* Return: the adress of the new element , NULL if it failed
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
/* pointeur vers adresse mémoire struct */
dlistint_t *new_node;
/* pointeur vers adresse mémoire struct */
new_node = malloc(sizeof(dlistint_t));
/* allocation mémoire création du node */
if (new_node == NULL)
/* on verifie */
return (NULL);
new_node->n = n;
/* assignation donnée a parametre n */
new_node->next = NULL;
/* assignation pointeur suivant vers NULL*/
if (*head == NULL)
/*verifie que head existe et qu'il y a un elt dans la liste */
{
*head = new_node;
/*si ya rien dernier node est premier*/
return (new_node);
}
while (temp->next != NULL)
/*parcourt la liste jusqu'au dernier */
temp = temp->next;
/* avancer jusqu'au dernier node */
temp->next = new_node;
/* assignation nouvau node au dernier elt */
new_node->prev = temp;
/* assignation pointeur precedent, dernier temp lors du parcours*/
return (new_node);
}
