# include "search_algos.h"
/**
 * linear_search - 
 * @array: first element of the arrangement
 * @size: array size
 * @value: value you wish to search for
 * Return: If it finds the value, it returns the index at which it found it.
 * If the value is not present in the array or if the array is null, it returns
 * -1
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
