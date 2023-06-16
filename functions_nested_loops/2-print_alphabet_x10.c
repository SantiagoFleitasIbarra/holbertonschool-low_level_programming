#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by
 * a new line.
 *
 * _putchar(char)
*/
void print_alphabet_x10(void)
{
	char alphaD;
	int num = '0';

	while (num <= 9)
	{
	for (alphaD = 'a' ; alphaD <= 'z' ; alphaD++)
		{
			_putchar(alphaD);
		}
	_putchar('\n');
	num++;
	}
}
