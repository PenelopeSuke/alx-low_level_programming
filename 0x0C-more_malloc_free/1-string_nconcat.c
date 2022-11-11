#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	int count = 0;
	char *d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != 0; a++)
	{
		count = count + 1;
	}
	d = malloc(sizeof(*d) * (count + n + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	for (b = 0; s1[b] != 0; b++)
	{
		d[b] = s1[b];
	}
	for (c = 0; s2[c] != 0 && c < n; c++, b++)
	{
		d[b] = s2[c];
	}
	d[b] = 0;
	return (d);
}
