#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer pointing to the singly linked list
 *
 * Return: 0 when successful
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
