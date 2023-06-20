#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line. But for mul
 * tiples of three print Fizz instead of the number and for the multiples of fi
 * ve print Buzz. For numbers which are multiples of both three and five print
 * FizzBuzz.
 *
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			print("%d", num);
		}
	}


	printf("\n");

	return (0);
}
