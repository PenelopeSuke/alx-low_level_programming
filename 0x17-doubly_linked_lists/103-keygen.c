#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, tm;

	tm = (len ^ 59) & 63;
	password[0] = codex[tm];

	tm = 0;
	for (i = 0; i < len; i++)
		tm += argv[1][i];
	password[1] = codex[(tm ^ 79) & 63];

	tm = 1;
	for (i = 0; i < len; i++)
		tm *= argv[1][i];
	password[2] = codex[(tm ^ 85) & 63];

	tm = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tm)
			tm = argv[1][i];
	}
	srand(tm ^ 14);
	password[3] = codex[rand() & 63];

	tm = 0;
	for (i = 0; i < len; i++)
		tm += (argv[1][i] * argv[1][i]);
	password[4] = codex[(tm ^ 239) & 63];


	for (i = 0; i < argv[1][0]; i++)
		tm = rand();
	password[5] = codex[(tm ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
