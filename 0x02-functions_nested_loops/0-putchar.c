#include "main.h"
/** main - prints out _putchar
 * return - always 0(Success)
 */

int main(void)
{
	char *pi = "_putchar";

	while (*pi)
	{
		_putchar(*pi);
		pi++;
	}
	_putchar('\n');
	return (0);
}
