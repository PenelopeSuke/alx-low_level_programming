#include "main.h"

/**
 * _strlen - give the length of a string
 * @s: the string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
		;
	return (a);
}
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer which contains a copy of the string
 * given as a parameter
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	int a;
	char *s;

	if (str == 0)
	{
		return (NULL);
	}
	a = _strlen(str);
	s = malloc(sizeof(char) * a + 1);
		if (s == 0)
		{
			return (NULL);
		}
		else
		{
			for (a = 0 ; str[a] != '\0' ; a++)
			{
				s[a] = str[a];
			}
		}
	s[a] = '\0';
	return (s);
}
