#include "main.h"
/**
 * print_numbers - a function that print out numbers
 * main - encloses code
 *
 * Return: 0 when successful
*/

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');

}
