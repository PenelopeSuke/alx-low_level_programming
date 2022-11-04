#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 * Return: 1 on success
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: 1 on success
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
