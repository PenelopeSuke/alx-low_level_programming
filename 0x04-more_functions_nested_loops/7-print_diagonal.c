#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, z;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (z = 0; z < x; z++)
			_putchar(' ');
		_putchat('\\');
		_putchar('\n')
	}
}
