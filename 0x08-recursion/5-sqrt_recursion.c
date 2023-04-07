#include "main.h"
/**
*_sqrt_recursion - a function that prints the natural square root of a number
*@n: parameter of interest (to be squared)
*Return: 0 for now
*/

int _sqrt_recursion(int n)
{
	if(n == '\0')
	{
		_putchar('\n');
		return (-1);
	}
	else if(n == 1)
	{
		_putchar('\n');
			return (1);
	}
	_putchar(n);
	n++;
	_sqrt_recursion(n);
}
