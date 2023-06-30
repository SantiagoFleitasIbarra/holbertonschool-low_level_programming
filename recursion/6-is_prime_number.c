#include "main.h"
/**
 * prime2 - possible to evaluate
 * @a: number
 * @b: number
 * Return: 1 if the input integer is a prime number, otherwise return 0.
*/
int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - a number is prime
 * @n: Number Integer
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
