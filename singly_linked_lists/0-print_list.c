#include "lists.h"

/**
* print_list - print the list
* @h: ptr head on the first node of the list
* Description: the list must be print and we use pointeurs
* Return: number of nodes
*/


size_t print_list(const list_t *h)
{
size_t count = 0;/* initialisation compteur */
if (h == NULL)/* si pointeur nul, liste vide */
{
printf("[0] (nil)\n");/* on imprime ça si la liste est vide */
return (0);/*retourne 0 car aucune elt à afficher */
}
while (h)/* tant que h != 0 */
{
printf("[%u] %s\n", h->len, h->str);/* affiche la longueur */
/* et la chaine du noeud actuel */
h = h->next;/* passe au node suivant */
count++;/*incrémenter le compteur de nodes */
}
return (count);/* retourne le nombre total de nodes */
}
