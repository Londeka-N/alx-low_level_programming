#include "main.h"
#include <stdlib.h"
/**
*str_concat - a function that links two strings together
*@s1: first parameter of interest
*@s2: second parameter of interest
*Return: linked strings
*/
char *str_concat(char *s1, char *s2)
{
	char *link;
	int i, li;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = li = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[li] != '\0')
		li++;
	link = malloc(sizeof(char) * (i + li + 1));

	if (link == NULL)

		return (NULL);

	i = li = 0;

	while (s1[i] != '\0')

	{

		link[i] = s1[i];

		i++;

	}


	while (s2[li] != '\0')

	{

		link[i] = s2[li];

		i++, li++;

	}

	link[i] = '\0';

	return (link);

}
