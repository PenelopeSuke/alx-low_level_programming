#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int a = 0;

	if (c >= '0' && c <= '9')
		a = 1;
	return (a);
}
