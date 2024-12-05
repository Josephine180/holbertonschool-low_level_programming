#include "lists.h"
#include <string.h>
/**
* add_node - add a node at the beggine of the list
* @head:  head, beggining of the list
* @str: string to store in the list
* Return: adresse of the head
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
size_t nlen;
temp = malloc(sizeof(list_t)); /* on alloue de la memoire */
if (temp == NULL) /* on verifie si ça échoue */
return (NULL);
temp->str = strdup(str); /* on duplique str */
if (temp->str == NULL) /* Check if strdup failed */
{
free(temp);
return (NULL);
}
for (nlen = 0; str[nlen]; nlen++) /* calcule la longueur de la chaîne */
temp->len = nlen; /* on affecte la longueur au node */
temp->next = *head; /* le node suivant est nul car c'est le dernier node */
*head = temp; /* on commence par le début */
return (*head);
}
