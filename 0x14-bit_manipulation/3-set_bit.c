#include "main.h"

/**
 * set_bit - value of a bit to 1 at a given index
 * @n: pointer number
 * @index: bit to set
 * Return: 1, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}


