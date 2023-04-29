#include <stdio.h>
#include "lists.h"
/**
* print_list - a function that prints all the elements of a sinly linked list
* @h: pointer pointing to the list
*
*Return: 0 when successful
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
