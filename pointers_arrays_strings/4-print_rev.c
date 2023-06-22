#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 *
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	do {
		i--;
		_putchar(s[i]);
	} while (i > 0);

	_putchar('\n');
}
