#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b:string of binary numbers
 * Return: converted number of unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}
	return (n);
}
