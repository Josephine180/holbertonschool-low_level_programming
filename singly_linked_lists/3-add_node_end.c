#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - add a node at the end of the list
* @head: double pointers on head
* @str: string to duplicate
* Return: adress of element or null if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp;  /* Nouveau node à ajouter*/
list_t *new_node;  /* Pointeur pour parcourir la liste*/
/* Allocation de mémoire pour le nouveau node */
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)  /* Vérifier l'allocation mémoire */
{

return (NULL);
}
/* Copier la chaîne de caractères dans le node */
new_node->str = strdup(str);
if (new_node->str == NULL) /* on verifie si c'est un echec */
{
free(new_node); /* on libere la mémoire*/
return (NULL);
}
new_node->len = strlen(str);/* on doit calculer la longueur de la chaîne*/
new_node->next = NULL;/* le prochain node est nul par défaut */
/* Si la liste est vide, le nouveau node devient le premier */
if (*head == NULL)
{
*head = new_node;
}
else /* si la liste est pas vide on parcourt la liste jusqu'a la fin */
{
temp = *head;
while (temp->next != NULL) /* on cherche le dernier node */
{
temp = temp->next; /* on passe au node suivant */
}
temp->next = new_node; /* ajouter un node à la fin */
}
return (new_node);/* on retourne l'adresse du nouveau node */
}
