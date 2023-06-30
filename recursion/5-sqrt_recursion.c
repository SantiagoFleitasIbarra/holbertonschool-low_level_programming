#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: Always n does not have a natural square root, the function should re
 * turn -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function
 * @n: number
 * @i: integral
 * Return: Always n does not have a natural square root, the function should re
 * turn -1
*/

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
