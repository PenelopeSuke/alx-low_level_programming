#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, e;

	a = 0;
	while (a < 1000)
	{
		b = a  / 100; /* hindreds */
		c = (a / 10) % 10; /* tens */
		e = a % 100; /* units */
		if (b < c && c < e)
		{
		putchar(e + '0');
		putchar(c + '0');
		putchar(b + '0');
		if (a < 789)
		{
			putchar(',');
			putchar(' ');
		}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
