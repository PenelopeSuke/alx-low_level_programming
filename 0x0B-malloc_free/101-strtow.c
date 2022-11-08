#include "main.h"

/**
 * strtow - function that splits a string into words
 * @str: pointer to the string for processin
 * Return: NULL
 */
char **strtow(char *str)
{
	int i, j, k = 0, l, q, count = 0, letter;
	char **words;

	if (str == NULL || str == 0)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == 0))
			count++;
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (i = 0; str[i] != 0 &&  k < count; i++)
	{
		if (str[i] != ' ')
		{
			letter = 0;
			for (j = i; str[j] != ' ' && str[j] != 0; j++)
				letter++;
			words[k] = malloc((letter + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (q = 0; q < k; q++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < letter; l++, i++)
				words[k][l] = str[i];
			words[k][l] = 0, k++;
		}
	}
	words[k] = NULL;
	return (words);
}
