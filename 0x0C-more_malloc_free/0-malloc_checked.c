#include "main.h"

/**
 * *malloc_checked - Creates an array based on passed in value
 * @b: Value passed in for array creation
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *c = NULL;

	C = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
