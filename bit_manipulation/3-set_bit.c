#include "main.h"

/**
 * set_bit - Sets the value of a bit
 * @n: A pointer to the bit
 * @index: The index
 *
 * Return: Always 1 (Success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
