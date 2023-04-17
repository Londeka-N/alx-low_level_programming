#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates and initializes a char
 * @size:size of  char of interest
 * @c: char of interest
 * Return: pointer to aaray or NULL if malloc fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	arrayptr = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
