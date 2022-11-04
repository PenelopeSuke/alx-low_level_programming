#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"

/**
 * coinConverter -  function that performs all of the mathematics.
 * @a: Passed in variable from main for calculations
 * Return: variable of the number of coins
 */
int coinConverter(int a)
{
	int count = 0;

	while (a != 0)
	{
		if (a % 10 == 9 || a % 10 == 7)
			a -= 2;
		else if (a % 25 == 0)
			a -= 25;
		else if (a % 10 == 0)
			a -= 10;
		else if (a % 5 == 0)
			a -= 5;
		else if (a % 2 == 0)
		{
			if (a % 10 == 6)
				a -= 1;
			else
				a -= 2;
		}
		else
			a -= 1;
		count++;
	}
	return (count);
}

/**
 * main - Considers just one argument for the minimum coin count
 * coinConverter -  function that performs all of the mathematics
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);

	if (a < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(a);

		printf("%d\n", coin);
	}
	return (0);
}
