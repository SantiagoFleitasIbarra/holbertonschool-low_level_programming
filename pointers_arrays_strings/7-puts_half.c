#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - Write a function that prints half of a string, followed by a new
 * line.
 * @str: string
 *
*/
void puts_half(char *str)
{
	int len = strlen(str);

	int i;

	for (i = len / 2; i < len; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
