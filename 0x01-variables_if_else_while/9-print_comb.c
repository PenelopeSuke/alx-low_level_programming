#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int t;

	for (t = 0; t < 20; t++)
	{
		putchar(t);
		if (t < 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
