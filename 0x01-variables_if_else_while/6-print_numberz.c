#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 for now
*/

int main(void)
{
	int i;

	for (i = '0' ; i <= '10' ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
