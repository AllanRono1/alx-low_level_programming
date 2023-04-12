#include "main.h"
#include <stdlib.h>

/**
 * Entry point - creates an array of chars, and initializes it
 * with a specific char
 * @c: char to assign
 * @size: size of array
 * Description: create array of chars and assign it with char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
