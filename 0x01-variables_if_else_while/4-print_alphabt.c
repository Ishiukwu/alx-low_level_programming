#include <stdio.h>

/**
 * main - prints alphabets in lowercase, except for q and e
 * Return: 0(Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}

