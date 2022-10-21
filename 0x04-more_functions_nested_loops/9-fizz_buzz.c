#include <stdio.h>
/**
 * main -   prints the numbers from 1 to 100, followed by a new line
 * Return: 0
 */
int main(void)
{
	int b;

	printf("1");
	for (b = 2; b <= 100; b++)
	{
		printf(" ");
		if (b % 3 == 0)
			printf("Fizz");
		if (b % 5 == 0)
			printf("Buzz");
		if (b % 3 != 0 && b % 5 != 0)
			printf("%d", b);
	}
	printf("\n");
	return (0);
}
