#include "main.h"
/**
 * _isalpha - a function that checks for alphabets
 * @c: value the code takes
 *
 * Return: 1 if c and 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
