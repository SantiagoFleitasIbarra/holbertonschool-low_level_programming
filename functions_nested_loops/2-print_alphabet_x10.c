#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * _putchar(char)
 */
void print_alphabet_x10(void)
{
	char letter;
	int num = 0;
	while (num <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			{
				_putchar(letter);
			}
	_putchar('\n');
	num++;
	}
}
