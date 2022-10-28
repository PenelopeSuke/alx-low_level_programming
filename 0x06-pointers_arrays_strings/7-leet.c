#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @s: string
 * Return: output
 */

char *leet(char *s)
{
	int a;
	int b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
		}
	}
	return (s);
}
