#include <stdlib.h>
#include <time.h>
/**
 * main - print whether the number stored in the variable n is positive, negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srnd(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 2)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
