#include "main.h"
/**
 * more_numbers - function that print 0-14 ten times
 *
 * Return: 0  when successful
*/

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 10; ++i)
	{
		num = 0;

		if (num >= 0 && num <= 14)
		{
			_putchar('0' + num);
		}
		num++;

		_putchar('\n');
	}
}
