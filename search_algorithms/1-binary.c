# include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integer
 * @array: first element of the array
 * @size: array size
 * @value: value to be searched
 * Return: If the value is not present in the array or if the array is null,
 * the function returns -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (right + left) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; ++i)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
