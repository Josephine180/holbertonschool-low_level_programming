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
 list_t *new_node;      /* Pointer to the new node */
    list_t *temp = *head;  /* Temporary pointer to traverse the list */

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);  /* Return NULL if memory allocation fails */
    }

    /* Duplicate the string and store it in the new node */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);  /* Free the allocated memory for the node */
        return (NULL);  /* Return NULL if strdup fails */
    }

    /* Set the length of the string */
    new_node->len = strlen(str);

    /* The new node's next pointer will be NULL (it's the last node for now) */
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Otherwise, traverse to the last node */
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        /* Link the new node at the end of the list */
        temp->next = new_node;
    }

    /* Return the address of the new node */
    return (new_node);
}
