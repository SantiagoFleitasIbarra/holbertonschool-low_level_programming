#include <stdio.h>
/**
 * main - Prints Write a program that prints the alphabet in lowercase, and the
 * n in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char min, may;

	for (min = 'a'; min <= 'z' ; min++)
	{
	putchar(min);
	}

	for (may = 'A'; may <= 'Z' ; may++)
	{
	putchar(may);
	}
	putchar('\n');
	return (0);
}
