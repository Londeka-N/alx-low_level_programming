#include "main.h"
/** _memcpy - a function used to copy a block memory
 * @edest: first parameter of interest
 * @src: second parameter of interest
 * @n: third parameter of interest
 *
 * Return: 0 for successful compilation
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
