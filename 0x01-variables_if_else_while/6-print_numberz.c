#include <stdio.h>

/**
 * main - prints out single digit in base 10, using putchar
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
