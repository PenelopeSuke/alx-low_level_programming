#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the memory to print
 * @c: character to print
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	a = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(sizeof(char) * size);
			if (array == '\0')
			{
				return ('\0');
			}
			else
			{
				while (a < size)
				{
					array[a] = c;
					a++;
				}
			}
			return (array);
	}
}
