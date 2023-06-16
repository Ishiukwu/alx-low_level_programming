#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int z;
	float f;

	printf("Size of char is: %lu bytes(s)\n", sizeof(c));
	printf("Size of int is: %lu bytes(s)\n", sizeof(i));
	printf("Size of long int is: %lu bytes(s)\n", sizeof(l));
	printf("Size of long long int is: %lu bytes(s)\n", sizeof(z));
	printf("Size of float is: %lu bytes(s)\n", sizeof(f));
	return (0);
}
