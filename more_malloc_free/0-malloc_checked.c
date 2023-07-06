# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable to store the pointer
 * Return: Always t (Success)
*/
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
