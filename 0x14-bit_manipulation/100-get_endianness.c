#include "main.h"
/**
 * get_endianness  - checks if a machine is little or big endian
 * Return: 0 when successful
 */
int get_endianness(void)
{
	short int num = 1;
	char *endian = (char *) &num;

	return ((int) *endian);
}
