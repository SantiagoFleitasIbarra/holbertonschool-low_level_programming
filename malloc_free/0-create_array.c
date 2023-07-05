# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of arrays
 * @c: char
 * Return: Always t (Success)
*/
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(char) * size);

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	return (t);
}
