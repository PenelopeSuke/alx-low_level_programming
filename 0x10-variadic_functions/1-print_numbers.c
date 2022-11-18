#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(num, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));
		if (n == a + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
