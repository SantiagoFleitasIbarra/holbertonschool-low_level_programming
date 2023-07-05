# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: width
 * @height: height
 * Return: Always t (Success)
*/
int **alloc_grid(int width, int height)
{
	int **t;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = (int *)malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(t[j]);
			}
			free(t);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j] = 0;

	return (t);
}
