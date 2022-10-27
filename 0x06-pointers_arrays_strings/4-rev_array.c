#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input
 * @n: input
 * Return: output
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int d;

	while (c < n)
	{
		n--;
		d = a[n];
		a[n] = a[c];
		a[c] = d;
		c++;
	}
}
