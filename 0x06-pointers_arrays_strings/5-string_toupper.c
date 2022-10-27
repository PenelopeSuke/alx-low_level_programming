#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input
 * Return: output
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] -= 32;
		}
	}
	return (s);
}
