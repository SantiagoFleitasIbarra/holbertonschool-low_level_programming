# include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integer
 * @array: first element of the arrangement
 * @size: array size
 * @value: value you wish to search for
 * Return: -1 if not present or if the array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
