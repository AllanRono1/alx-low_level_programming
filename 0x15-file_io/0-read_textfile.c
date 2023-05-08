#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer tofile name
 * @letters: number of letters it should read and print
 * Return: if write fails or does not write the expected amount of bytes,
 * return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	z = read(x, buffer, letters);
	y = write(STDOUT_FILENO, buffer, z);

	free(buffer);
	close(x);
	return (y);
}
