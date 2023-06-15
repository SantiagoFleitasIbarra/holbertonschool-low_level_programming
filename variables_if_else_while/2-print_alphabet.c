#include <stdio.h>

/**
 * main - Prints Write a program that prints the alphabet in lowercase, followe
 * d by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
	putchar(alphabet);
	putchar('\n');
	}

	return (0);
}
