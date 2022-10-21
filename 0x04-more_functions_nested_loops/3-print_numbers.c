#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: 0
 */
void print_numbers(void)
{
	int z = 0;

	while (z < 10)
		_putchar(z++ + '0');
	_putchar('\n');
}
