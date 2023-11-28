#include "main.h"
/**
*print_most_numbers - a function that prints most numbers
*
*Return: 0 when successful
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num >= 48 && num <= 57)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}

		num++;
	}

	_putchar('\n');
}
