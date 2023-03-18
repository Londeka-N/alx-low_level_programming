#include <stdio.h>
/**
 * main -prints code for size
 *
 * Return: 0 always for successful output
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
