#include <stdio.h>
/**
 *  main - Prints the sum of even-valued Fibonacci sequenc
 *  terms not exceeding 4000000
 *  Return: Always 0
 */
int main(void)
{
	unsigned long fibo7 = 0, fib08 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fibo7 + fibo8;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fibo7 = fibo8;
		fibo8 = fibsum;
	}
	printf("%.0f\n", tot_sum);
	return (0);
}
