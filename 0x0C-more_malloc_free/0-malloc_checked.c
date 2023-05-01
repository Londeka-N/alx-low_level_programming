#include "main.h"
/**
 * malloc_checked - a function that will allocate memory
 * @b: number of interest
 * Return: 0 for now
*/

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

return (0);
}
