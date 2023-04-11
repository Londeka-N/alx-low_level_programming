#include <stdio.h>
#include <stdlib.h>
/**
 * main - encloses my script
 * @argc: counts arguments
 * @argv: array of stringsi
 * Return: 0 for now
*/
int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
