#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer
 * Return: -1 n is lower than 0, otherwwise 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
