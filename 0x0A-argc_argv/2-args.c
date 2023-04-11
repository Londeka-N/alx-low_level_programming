#include <stdio.h>
/**
 * main - function that will print my program
 * @argc: counts arguments
 * @argv: pointer array
 * Return: 0 for now
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
