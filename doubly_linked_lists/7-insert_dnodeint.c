#include "lists.h"

/**
* insert_dnodeint_at_index - function that adds a node at index
* @h: pointeur of pointeur on the first adress of the first node
* @idx: index where the node must be insert
* @n: value to insert in the new node
* Return: adress of the new node or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h; /* pointeur qui parcourt la liste */
dlistint_t *new_node;/*pointeur adresse memoire nouveau node */
unsigned int i = 0;/*variable de type compteur pour index*/
if (idx == 0) /* si index 0 , inserer node en tete de liste */
return (add_dnodeint(h, n));
while (current != NULL && i < idx - 1)
/* tant que current pas nul et i pas à la fin de l'index */
{
current = current->next; /* on avance au noeud suivant */
i++;
}
if (current == NULL)
return (NULL);/*index plus grand que la liste donc null */
new_node = malloc(sizeof(dlistint_t));
/* on alloue de la mémoire */
if (new_node == NULL) /*gestion risque si ca échoue */
return (NULL);
new_node->n = n; /*assigne les valeurs */
/*savoir si on insere au milieu ou a la fin */
new_node->next = current->next; /* noeud suivant est le noeud actuel*/
new_node->prev = current; /* precedent du nouveau noeud est le noeud actuel */
if (current->next != NULL)
{
current->next->prev = new_node;
/* si le suivant existe mise à jour du prev pour pointer vers nouveau noeud */
}
current->next = new_node;
return (new_node);
}
