#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
char alpha, num;
for (num = 0; num <= 9; num++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n')
}
}
