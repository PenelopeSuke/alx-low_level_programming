#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t name, file1, a;
	char *file2;

	text = malloc(letters);
	if (file2 == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	name = open(filename, O_RDONLY);

	if (name == -1)
	{
		free(file2);
		return (0);
	}
	let = read(name, file2, letters);

	a = write(STDOUT_FILENO, file2, file1);
	close(name);
	return(a);
}
