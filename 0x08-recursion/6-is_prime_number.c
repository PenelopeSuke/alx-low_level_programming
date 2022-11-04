#include "main.h"

/**
 * prime2 - prime2 - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 * Return: 1  if the input integer is a prime number
 * otherwise return 0
 */
int prime2(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime2(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: 1  if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
