#include <stdio.h>
/**
 * main - Prints Write a program that prints the alphabet in lowercase, and the
 * n in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char min = 'a', may = 'A';

	for (; min <= 'z' ;)
	{
	putchar(min);
	min++;
	}

	do {
	putchar(may);
	may++;
	} while (may <= 'Z');

	putchar('\n');
	return (0);
}
