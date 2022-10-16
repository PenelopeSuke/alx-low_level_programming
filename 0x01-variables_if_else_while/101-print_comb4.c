#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0
 */
int main(void)
{
	int a, b, d;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (d = 2; d <= 9; d++)
			{
				printf ("%d%d%d, ", a, b, d);
			}
		}
	}
	return (0);
}


