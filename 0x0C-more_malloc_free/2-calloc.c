#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number ofelements
 * @size: size of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	int i = 0, j = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	d = malloc(j);

	if (d == NULL)
		return (NULL);
	while (i < j)
	{
		d[i] = 0;
		i++;
	}
	return (d)
}
