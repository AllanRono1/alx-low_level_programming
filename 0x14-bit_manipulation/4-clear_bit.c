#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: pointer to the bit
 * @index: index of bit to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 2))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
