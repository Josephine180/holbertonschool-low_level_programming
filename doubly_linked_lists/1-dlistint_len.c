#include "lists.h"

/**
* dlistint_len - function that returns number of elements in a linked list
* @h: pointeurs head at the beginning of the list
* Return: numbers of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
/* pointeur vers struct initialisé adresse memoire du premier node */
size_t count = 0;
/* pour compter le nombre de nodes */
while (current != NULL)
{
count++;
curent = current->next; /* on incremente l'adress memoire */
}
return (count);
}
