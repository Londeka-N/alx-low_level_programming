#include "main.h"
/**
 * binary_to_uint - function converting a binary number to an unsigned int
 * @b: pointer containing binary
 *
 * Return: 0 when successful
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
