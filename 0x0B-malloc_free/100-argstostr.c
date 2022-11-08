#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c;
	int count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
			count++;
		count++;
	}
	count++;
	s = malloc(count * sizeof(char));
	if (s == NULL)
	{
		fre(s);
		return (NULL);
	}
	C = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++, c++)
		{
			s[c] = av[a][v];
		}
		s[c] - '\n';
		c++;
	}
	return (s);
}
