#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int a;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(string, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == a + 1)
		{
			break;
		}
		printf("%s", separator);

	}
	printf("\n");
	va_end(string);
}
