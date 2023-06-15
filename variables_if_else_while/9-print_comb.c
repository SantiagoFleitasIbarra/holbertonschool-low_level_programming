#include <stdio.h>

/**
 * main - Prints Write a program that prints all possible combinations of singl
 * e-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (; num <= 9; )
	{
	putchar((num % 10) + '0');
	if (num == 9)
	continue;
	num++;	
	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
