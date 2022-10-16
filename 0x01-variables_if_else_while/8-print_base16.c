#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int num;
	char za;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (za = 'a'; za <= 'f'; za++)
		putchar(za);

	putchar('\n');

	return (0);
}

