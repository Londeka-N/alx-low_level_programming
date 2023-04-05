#include "main.h"
/**
 * factorial - a function that girves a factorial of a given number
 * @n: parameter of interest
 * Return: 0 for now
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
