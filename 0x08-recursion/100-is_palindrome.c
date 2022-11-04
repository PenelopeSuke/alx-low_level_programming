#include "main.h"

/**
 * palind1 - obtains length of x
 * @x: string
 * @l: integer to count length
 * Return: 1 if a string is a palindrome and 0 if not
 */
int palind1(char *x, int l)
{
	if (*x == 0)
		return (l - 1);
	return (palind1(x + 1, l + 1));
}
/**
 * palind2 - compares string vs string reverse
 * @x: string
 * @l: length
 * Return: 1 0n success
 */
int palind2(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (palind2(x + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = palind1(s, 0);
	return (palind2(s, l));
}
