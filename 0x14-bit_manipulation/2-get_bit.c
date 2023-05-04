#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: bit
 * @index: index of the bit
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);

	if (index >= (sizeof(unsigned long int) * 2))
		return (-1);

	return (1);
}
