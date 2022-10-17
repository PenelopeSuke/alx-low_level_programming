#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0
 */
int main(void)
{
	int digit7, digit8, digit9;

	for (digit7 = 0; digit7 < 8; digit7++)
	{
		for (digit8 = digit7 + 1; digit8 < 9; digit8++)
		{
			for (digit9 = digit8 + 1; digit9 < 10; digit9++)
			{
				putchar((digit7 % 10) + '0');
				putchar((digit8 % 10) + '0');
				putchar((digit9 % 10) + '0');

				if (digit7 == 7 && digit8 == 8 && digit9 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
