#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		putchar((t % 10) + '0');
		if (t == 9)
			continue;
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
