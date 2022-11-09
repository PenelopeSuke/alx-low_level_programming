#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * Return: on success 1 else -1
 */
int _putchar(char c)
{
	return (fwrite (1, &c, 1));
}
