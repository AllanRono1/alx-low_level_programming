#include <stdio.h>
 /**
  * main -Entry point
  *Description: 'combinations of two two-digit numbers'
  * Return: 0
  */

int main(void)
{
	int i;
	int j;

	for (i = 0; 1 <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('n');
	return (0);
}

