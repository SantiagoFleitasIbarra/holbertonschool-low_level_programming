# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmeb: number of elements
 * @size: size of elements
 * Return: Always t (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = malloc(nmemb * size);

	if (t == NULL)
	{
		return (NULL);
	}
	for (; i < nmemb * size; i++)
	{
		t[i] = 0;
	}

	return (t);
}
