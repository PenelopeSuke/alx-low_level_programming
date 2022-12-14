#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argc[i][j] != '\0'; j++)
		{
			if (argc[i][j] > 57 || argc[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argc[1] * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
