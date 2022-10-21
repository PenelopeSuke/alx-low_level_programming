#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int a, triangle;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (triangle = size - a; triangle > 0; triangle--)
				_putchar(' ');

			for (triangle = 0; triangle < a; triangle++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
