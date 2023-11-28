#include 'main.h"
/**
*print_most_numbers - a function that prints most numbers
*main - encloses the code
*
*Return: 0 when successful
*/

void print_most_numbers()
{
	int num;
	while (num >= 48 && num <= 57)
	{
		while(num != 50 && num != 52)
		{
			_putchar('0' + num);
			num++;
		}
		putchar('\n');
	}
}
