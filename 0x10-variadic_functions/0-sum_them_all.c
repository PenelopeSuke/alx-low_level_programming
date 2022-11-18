#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: 0 if n is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(valist, const unsigned int);
	}
	va_end(valist);
	return (sum);
}
