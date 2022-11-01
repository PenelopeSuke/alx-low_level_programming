#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int b, c, num1 = 0, num2 = 0;

	for (b = 0; b <= (size * size); b = b + size + 1)
		num1 = num1 + a[b];

	for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
		num2 = num2 + a[c];
	printf("%d, %d\n", num1, num2);
}
