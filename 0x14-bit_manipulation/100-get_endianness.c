#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	unsigned int a = 1;

	char *b = (char *) &a;

	return ((int)*b);
}
