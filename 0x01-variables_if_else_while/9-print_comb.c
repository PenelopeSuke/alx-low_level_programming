#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int t;

	for (t = 28; t < 38; t++)
	{
		putchar(t);
		if (t != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
