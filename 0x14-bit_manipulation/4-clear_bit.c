#include "main.h"

/**
 * clear_bit - function that clears the value of a bit at a given index
 * @n: number to be changed
 * @index: the index
 * Return: 1, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n & ~m);
	return (1);
}
