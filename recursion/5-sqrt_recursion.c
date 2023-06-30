#include "main.h"
/**
 * sqrt2 - possible to evaluate
 * @a: number
 * @b: number
 * Return: Always n does not have a natural square root, the function should re
 * turn -1
*/
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
