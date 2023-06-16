#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by
 * a new line.
 *
*/
void print_alphabet_x10(void)

{
	char alphaD = 'a';
	int num = '0';

	while (num <= 9)
	{
		for (; alphaD <= 'z' ; alphaD++)
		{
			_putchar(alphaD);
			_putchar('\n');
		}
	num++;
	}
}
