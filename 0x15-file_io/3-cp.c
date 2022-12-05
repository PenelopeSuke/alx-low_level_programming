#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: num argument
 * @argv: string argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file1_from, file1_to;
	int num1 = 1024, num2 = 0;
	char *buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file1_from file1_to\n"), exit(97);
	file1_from = open(argv[1], O_RDONLY);
	if (file1_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file1_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (file1_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file1_from), exit(99);
	}
	while (num1 == 1024)
	{
		num1 = read(file1_from, buffer, 1024);
		if (num1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(file1_to, buffer, num1);
		if (num2 < num1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file1_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1_from), exit(100);


	if (close(file1_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1_to), exit(100);


	return (0);
}
