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
	list_t *k, *p;
	size_t nchar;

	k = malloc(sizeof(list_t));
	if (k == NULL)
		return (NULL);

	k->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	k->len = nchar;
	k->next = NULL;
	p = *head;

	if (p == NULL)
	{
		*head = k;
	}
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = k;
	}

	return (*head);
}
