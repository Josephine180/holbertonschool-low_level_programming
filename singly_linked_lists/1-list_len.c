#include "lists.h"

/**
* list_len - function that returns the number of elt
* @h: pointeur head on the first node
* Return: number of element
*/

size_t list_len(const list_t *h)
{
size_t count = 0;/* initialisation compteur à 0*/
const list_t *str = NULL;/* initialisation du pointeur*/
str = h;/* pointeur str sur 1er elt de la liste*/
while (str != NULL)/* tant que pointeur != 0 on affiche*/
{
count++;/* on incrémente pour chaque node*/
str = str->next;/*on passe au node suivant dans la liste*/
}
return (count);/*retourne le nombre de node */
}
