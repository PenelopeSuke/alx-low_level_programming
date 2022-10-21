#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 * Do not print 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int z = 0;

	while (z < 10)
	{
		if (z != 2 && z != 4)
			_putchar(z + '0');

		z++;
	}
	_putchar('\n');
}
