#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0
 */
int main()
{
	int h = '0', t = '1', u = '2';
	while ((h <= '7') || (t <= '8') || (u <= '9'))
	{
		printf ("%c%c%c, ", h, t, u);

		if (u != '9')
		{
			++u;
		}
		else
		{
			if (t != '8')
			{
				++t;
				u = t + 1;
			}
			else
			{
				++h;
				t = h + 1;
				u = t + 1;
			}
	}
	return (0);
	}
}
