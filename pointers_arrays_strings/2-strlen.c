#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: the length of a string.
 *
*/
int _strlen(char *s)
{ 
	int cont = 0;

	while (*s != 0)
	{
		cont++;
		s++;
	}
	return (cont);
}
