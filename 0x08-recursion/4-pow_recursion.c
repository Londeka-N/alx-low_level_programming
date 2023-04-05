#include "main.h"
/**
 * _pow_recursion - function that prints a value raised to the power of y
 * @x: base of interest
 * @y: exponet of interest
 * Return: 0 for now
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
