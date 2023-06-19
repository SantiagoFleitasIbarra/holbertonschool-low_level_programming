#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 *
*/
void print_square(int size)
{
	int h = 0, w = 0;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
