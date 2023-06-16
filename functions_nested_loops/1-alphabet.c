#include "main.h"

/**
 * print_alphabet - Prints Write a function that prints the alphabet, in lowercase, follo
 * wed by a new line.
 *
*/

void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z' ; )
	{
	_putchar(alpha);
	alpha++;
	}

	_putchar('\n');
}
