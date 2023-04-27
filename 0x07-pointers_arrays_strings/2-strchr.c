#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: The string of interes
 * @c: The character of interest
 *
 * Return: 0 for succeful output
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
