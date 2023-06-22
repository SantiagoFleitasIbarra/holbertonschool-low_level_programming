#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: string
 *
*/
void rev_string(char *s)
{
	int tam = strlen(s);
	int count;
	char temp;

	for (count=0; count<tam/2; count++)
	{
		temp = s[count];
		s[count] = s[tam-1-count];
		s[tam-count-1] = temp;
	}
}
