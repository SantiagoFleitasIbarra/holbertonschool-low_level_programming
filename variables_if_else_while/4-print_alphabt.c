#include <stdio.h>

/**
 * main - Prints Write a program that prints the alphabet in lowercase, followe
 * d by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	for (;letter <= 'z';)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	letter++;
	}

	putchar ('\n');

	return (0);
}
