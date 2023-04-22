#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that sums up all its paramters.
 * @n: number of digits to be summed up
 * @...: digits which the sum will be calculated for
 *
 * Return: sum of all digits
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}

