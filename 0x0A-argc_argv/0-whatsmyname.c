#include <stdio.h>
#include "main.h"
/**
 *main - a function enclosing my code
 *@argc: counts argument
 *@argv: array of pointers
 *Return: 0 for now
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
