#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to STDOUT
 * @filename: pointer to the name of file
 * @letters: number of letters the fuction should read
 * Return: actual number of letters it could read and print,if null
 * return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(0, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	o = open(filename, O_RDONLY);

	if (r == -1 || o == -1 || w != r || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}
