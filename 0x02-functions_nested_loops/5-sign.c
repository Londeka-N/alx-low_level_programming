#include "main.h"
/**
 * print_sign - function that checks the sign of a number
 * @n: the integer
 *
 * Return: 1 when positive, 0 when negative and -1 when negative
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	{
		putchar(48);
		return (0);
	}
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
}
