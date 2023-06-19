#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: n is the number of times the character _ should be printed
 *
*/
void print_line(int n)
{

	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
