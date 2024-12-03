#include "lists.h"

/**
* print_dlistint - functions that prints all the element of a list
* @h: pointeur on the first node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;/* initialisation compteur */
while (h != NULL)/* tant que h != 0 */
{
printf("%d\n", h->n);/* affiche la longueur */
/* et la chaine du noeud actuel */
h = h->next;/* passe au node suivant */
count++;/*incrémenter le compteur de nodes */
}
return (count);/* retourne le nombre total de nodes */
}
