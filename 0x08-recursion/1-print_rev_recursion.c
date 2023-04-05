#include "main.h"
/**
 * _print_rev_recursion - function that will print a string in reverse
 * @s: parameter to be used
 *
 * return: 0 for now
*/

void _print_rev_recursion(char *s);
{
	if (*s == '\0')
		return;	
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
