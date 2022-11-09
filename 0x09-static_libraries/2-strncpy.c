#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		if (a < n)
		{
			dest[a] = src[a];
		}
	}
	for ( ; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
