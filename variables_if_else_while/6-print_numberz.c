#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (; num < 10; )
	{
	putchar((num % 10) + '0');
	num++;
	}

	putchar('\n');

	return (0);
}
