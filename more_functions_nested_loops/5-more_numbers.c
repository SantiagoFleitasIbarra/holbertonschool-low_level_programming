#include "main.h"
/***/
void more_numbers(void)
{
	int num, count = 0;

	do
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}while (count <= 9)
}
