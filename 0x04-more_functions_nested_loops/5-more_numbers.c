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
		for (num = 0; num <= 14; ++num)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}

			_putchar('0' + num % 10);
		}

		_putchar('\n');
	}
}
