#include <stdio.h>

/**
 * main - Prints Write a program that prints all single digit numbers of base 1
 * 0 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char num = '0';

	for ( ; num < '10' ;)
	{
	putchar('0' + num);
	num++;
	}

	putchar ('\n');
	return (0);
}
