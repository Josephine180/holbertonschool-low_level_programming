#include "lists.h"

/**
* get_dnodeint_at_index - function that takes index
* @head: pointeurs on the first node of the list
* @index: position of the node that we want
* Return: return nth node or NULL if it failed
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head; /* pointeur qui parcourt la liste */
unsigned int current_index = 0;
/* variable qui va suivre l'index(compteur)*/
while (head == NULL)
return (NULL);
/* si head est null il y a pas de noeuds on retourne null */
while (current != NULL)
{
if (current_index == index)
return (current);/*si on trouve le noeud on le retourne */
current = current->next;/* on avance notre pointeur au noeud après*/
/*on met a jour le pointeur pour qu'il avance au prochain noeud */
/* permet de naviguer dans la liste */
current_index++;/*on incremente l'index*/
/* compteur qui sert a suivre la position dans la liste */
/* pas un pointeur compare index actuel à index demandé */
}
return (NULL);
}
