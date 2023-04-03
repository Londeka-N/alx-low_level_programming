#include "main.h"
/**
*_memset - a function that is used to fill a block of memory
*@s: value to be filled
*@n: number of bytes to be filled
*@b: constant byte
*Return: new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (;n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
