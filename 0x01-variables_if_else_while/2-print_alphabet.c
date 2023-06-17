#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet[a]);
	}
	putchar("\n");
	return (0);
}
