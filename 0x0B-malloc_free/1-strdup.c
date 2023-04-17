#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated string
 * @str: character of that must be duplicated
 * Return: 0 for now
*/
char *_strdup(char *str)
{
	char *dup;
	int i, r;

	i = 0;
	r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];
	return (dup);
}
