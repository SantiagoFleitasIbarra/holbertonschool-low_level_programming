#include <stdio.h>

/**
 * main - Prints Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; )
	{
	putchar(letter);
	letter--;
	}

	putchar('\n');

	return (0);
}
