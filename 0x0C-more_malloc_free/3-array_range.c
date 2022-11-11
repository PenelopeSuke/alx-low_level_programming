#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *d;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	d = malloc(sizeof(*d) * (size + 1));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++, min++)
	{
		d[i] = min;
	}
	return (d);
}
