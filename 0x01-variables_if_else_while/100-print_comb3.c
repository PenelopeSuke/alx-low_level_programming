#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 * a comma followed by a space, in ascending order
 * Return: Always 0
 */
int main(void)
{
	int digit7, digit8;

	for (digit7 = 0; digit7 < 9; digit7++)
	{
		for (digit8 = digit7 + 1; digit8 < 10; digit8++)
		{
			putchar((digit7 % 10) + '0');
			putchar((digit8 % 10) + '0');

			if (digit7 == 8 && digit8 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
