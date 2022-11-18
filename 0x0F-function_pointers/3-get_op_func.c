#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a = 0;

	while (op_s[a].op)
	{
		if (*(op_s[a].op) == *s)
			return (op_s[a].f);
		a++;
	}
	return (NULL);
}
