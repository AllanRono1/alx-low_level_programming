#include "main.h"

/**
 * append_text_to_file - program that copies the content of a file to
 * another file.
 * @filename: a pointer to file name
 * @text_content: pointer to end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);

if (x == -1 || y == -1)
return (-1);

close(x);

return (1);
}
