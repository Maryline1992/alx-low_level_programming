#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: A name of the file
 * @text_content: A text file to be appended
 * Return: -1 if it fails otherwise 1 if successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, length, z = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	length = write(x, text_content, z);

	if (x == -1 || length == -1)
		return (-1);

	close(x);
	return (1);
}
