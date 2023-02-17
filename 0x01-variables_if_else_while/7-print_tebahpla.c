#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: 0(Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
