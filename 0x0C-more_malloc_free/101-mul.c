#include "main.h"

/**
 * Entry point - program that multiplies two positive numbers
 * @argc: n argument
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, l;

	if (argc != 3)
	{ printf("Error\n");
		exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l] != '\0'; l++)
		{
			if (argv[i][l] > 57 || argv[i][l] < 48)
			{ printf("Error\n");
				exit(98); }
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
