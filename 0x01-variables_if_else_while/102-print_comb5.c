#include <stdio.h>
/**
 * main -  Prints all possible combinations of two two-digit numbers
 * ranging from 0-99, separated by a comma followed by a space
 * Return: Always 0
 */
int main(void)
{
	int num4, num5;

	for (num4 = 0; num4 <= 98; num4++)
	{
		for (num5 = num4 + 1; num5 <= 99; num5++)
		{
			putchar((num4 / 10) + '0');
			putchar((num4 % 10) + '0');
			putchar(' ');
			putchar((num5 / 10) + '0');
			putchar((num5 % 10) + '0');

			if (num4 == 98 && num5 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
