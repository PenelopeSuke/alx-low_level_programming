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

	while (s[a])
	{
		for (b = 0; b < d; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
		}
	a++;
	}
	return (s);
}
