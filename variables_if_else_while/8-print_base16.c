#include <stdio.h>

/**
 * main - Prints Write a program that prints all the numbers of base 16 in lowe
 * rcase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	do {
	putchar((num % 10) + '0');
	num++;
	} while (num < 10);

	for (; letter <= 'f'; )
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');

	return (0);
}
