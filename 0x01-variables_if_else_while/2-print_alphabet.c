#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase'
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
