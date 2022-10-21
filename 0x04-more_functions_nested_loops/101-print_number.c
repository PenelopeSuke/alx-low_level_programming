#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: int type number
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n
	}
	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}
int main(void)
{
	int n = 976;

	print(n);
	return (0);
}
