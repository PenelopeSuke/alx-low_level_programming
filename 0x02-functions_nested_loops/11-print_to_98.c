#include "main.h"
/**
 *  print_to_98 - Prints all natural numbers from input to 98
 *  in order separated by a comma followed by a space
 *  @num1: The number to begin counting at
 */
void print_to_98(int num1)
{
	if (num1 >= 98)
	{
		while (num1 > 98)
			printf("%d, ", num1--);
		printf("%d\n", num1);
	}
	else
	{
		while (num1 < 98)
			printf("%d, ", num1++);
		printf("%d\n", num1);
	}
}
