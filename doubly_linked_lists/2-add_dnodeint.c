# include "lists.h"

/**
* add_dnodeint - ajout d'un node at the beginning
* @head: pointeurs sur l'adresse memoire du premier node
* @n: n int to store in the list
* Return: adresse of the head
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
/* pointeur vers adresse memoire premier node */
dlistint_t *ptr;
ptr = *head;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
if (*head != NULL) /* si liste non vide */
ptr->prev = temp; /* assignation adresse memoire */
temp->n = n;
temp->prev = NULL;
temp->next = *head;
*head = temp;
/* assignation adresse memoire de head du premier element à head */
return (temp);
}
