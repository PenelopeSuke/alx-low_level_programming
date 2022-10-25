#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int sum = 2772;
	int a;

	srand(time(0));
	while (sum)
	{
		a = rand() % 100;
		if (a <= 94)
			a += 32;
		else
			continue;
		if (sum - a == 0)
		{
			sum -= a;
			printf("%c", a);
		}
		else if (sum - a - 32 > 0)
		{
			sum -= a;
			printf("%c", a);
		}
	}
	return (0);
}
