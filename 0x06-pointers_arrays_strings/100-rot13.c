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
	char c[] = {'A', 'B', 'C', 'D', 'E', 'F',
	            'G', 'H', 'I', 'J', 'K', 'L',
		    'M', 'N', 'O', 'P', 'Q', 'R',
		    'S', 'T', 'U', 'V', 'W', 'X',
		    'Y', 'Z', 'a', 'b', 'c', 'd',
		    'e', 'f', 'g', 'h', 'i', 'j',
		    'k', 'l', 'm', 'n', 'o', 'p',
		    'q', 'r', 's', 't', 'u', 'v',
		    'w', 'x', 'y', 'z'};
	char d[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		    'T', 'U', 'V', 'W', 'X', 'Y',
		    'Z', 'A', 'B', 'C', 'D', 'E',
		    'F', 'G', 'H', 'I', 'J', 'K',
		    'L', 'M', 'N', 'O', 'P', 'Q',
		    'r', 's', 't', 'u', 'v', 'w',
		    'r', 's', 't', 'u', 'v', 'w',
		    'd', 'e', 'f', 'g', 'h', 'i',
		    'j', 'k', 'l', 'm'};

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
