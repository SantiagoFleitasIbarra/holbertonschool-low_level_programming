#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: n is the number of times the character _ should be printed
 *
*/
void print_line(int n)
{

	char alpha = 'a';

	for (; alpha <= 'z' ; )
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
