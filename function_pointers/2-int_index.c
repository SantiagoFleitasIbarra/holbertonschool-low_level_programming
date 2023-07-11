# include "function_pointers.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: array to go through
 * @size: size of array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
