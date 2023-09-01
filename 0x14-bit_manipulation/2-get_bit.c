#include "main.h"

/**
 * get_bit - function that returns the value of a bitat a given index
 * @n: number to be operated on
 * @index: index of bit
 * Return: value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
	
	return (-1);
}
