#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program checker
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int a, b, answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	answer = argv[2][0];
	switch (answer)
	{
		case '+':
			break;
		case '-':
			break;
		case '*':
			break;
		case '/':
			break;
		case '%':
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get = get_op_func(argv[2]);
	printf("%d\n", get(a, b));
	return (0);
}
