#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *  1 and 2, separated by a comma followed by a space
 *  Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib7 = 0, fib8 = 1, sum;
	unsigned long fib7_half7, fib7_half8, fib8_half7, fib8_half8;
	unsigned long half7, half8;

	for (count = 0; count < 92; count++)
	{
		sum = fib7 + fib8;
		printf("%lu, ", sum);

		fib7 = fib8;
		fib8 = sum;
	}

	fib7_half7 = fib7 / 10000000000;
	fib8_half7 = fib8 / 10000000000;
	fib7_half8 = fib7 % 10000000000;
	fib8_half8 = fib8 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half7 = fib7_half7 + fib8_half7;
		half8 = fib7_half8 + fib8_half8;
		if (fib7_half9 + fib8_half8 > 9999999999)
		{
			half7 += 1;
			half8 %= 10000000000;
		}
		printf("%lu%lu", half7, half8);
		if (count != 98)
			printf(", ");

		fib7_half7 = fib8_half7;
		fib7_half8 = fib8_half8;
		fib8_half7 = half7;
		fib8_half8 = half8;
	}
	printf("\n");
	return (0);
}
