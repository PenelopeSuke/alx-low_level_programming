#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 * Return: output
 */

char *rot13(char *s)
{
	int a;
	int b;
	char c[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char d[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; x[b]; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
		}
	}
	return (s);
}
