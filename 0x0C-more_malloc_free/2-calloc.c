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
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	d = malloc(nmemb * size);

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		d[i]  = 0;
	}
	return (d);
}
