#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int x, y, **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < height ; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (x = x - 1; x >= 0 ; x--)
			{
				free(array[x]);
			}
			free(array);
			return (NULL);
		}
		for (y = 0 ; y < width ; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
