#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the memory to print
 * @c: character to print
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		buffer = malloc(sizeof(char) * size);
			if (buffer == 0)
			{
				return (NULL);
			}
			else
			{
				while (i < size)
				{
					buffer[i] = c;
					i++;
				}
			}
			return (buffer);
	}
}
