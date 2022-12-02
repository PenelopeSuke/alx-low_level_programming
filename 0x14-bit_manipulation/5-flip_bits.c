#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n:input
 * @m:input
 * Return: Number of flip in the Input numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0, set1, set2;

	while (!(n == 0 && m == 0))
	{
		set1 = n & 1;
		set2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (set1 != set2)
			num += 1;
	}
	return (num);
}
