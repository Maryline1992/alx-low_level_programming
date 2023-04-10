#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it reads file and prints to the POSIX standard output
 * @letters: number of letters used to read and print
 * @filename: The name of file to read
 * Return: 0 if it doesnt work or fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (z);
}
