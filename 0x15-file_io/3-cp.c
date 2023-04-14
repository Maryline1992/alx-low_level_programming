#include "main.h"
#include "stdlib.h"
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * check_error - An error message to be printed
 * @error: error message
 * @arg: arguments
 * Return: 1 otherwise -1 if it fails
 */

void check_error(int error, char *arg)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", arg);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", arg);
			break;
		default:
			dprintf(STDERR_FILENO, "Unknown error occurred\n");
			break;
	}
}

/**
 * main - copy contents from a file to another file
 * @argv: pointer of arguments
 * @argc: number to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int q1, q2, readit, writeit;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		check_error(97, argv[0]);
		exit(97);
	}
	q1 = open(argv[1], O_RDONLY);
	if (q1 == -1)
	{
		check_error(98, argv[1]);
		exit(98);
	}
	q2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (q2 == -1)
	{
		check_error(99, argv[2]);
		exit(99);
	}
	while ((readit = read(q1, buf, BUF_SIZE)) > 0)
	{
		writeit = write(q2, buf, readit);
		if (writeit != readit)
		{
			check_error(99, argv[2]);
			exit(99);
		}
	}
	if (readit == -1)
	{
		check_error(98, argv[1]);
		exit(98);
	}
	close(q1);
	close(q2);
	return (0);
}
