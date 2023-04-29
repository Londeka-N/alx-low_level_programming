#include < stdlib.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: pointer pointing to the linked list.
 * @str: string to store in the list.
 *
 * Return: 0 if successfull
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
