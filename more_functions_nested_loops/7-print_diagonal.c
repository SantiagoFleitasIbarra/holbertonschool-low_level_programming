#include "main.h"
/***/
void print_diagonal(int n)
{
	int l = 0, s = 0;

	if (n > 0)
	{
		while (l < n)
		{
			while (s < l)
			{
				_putchar(' ');
				s++;	
			}
			l++;
			s = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
