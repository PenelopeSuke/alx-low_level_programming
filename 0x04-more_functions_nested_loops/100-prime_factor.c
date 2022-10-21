#include <stdio.h>
#include <math.h>
/**
 * main - rints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	int d;

	for (d = (int) sqrt(num); d > 2; d++)
	{
		if (num % d == 0)
		{
			printf("%d\n", d);
			break;
		}
	}
	return (0);
}
