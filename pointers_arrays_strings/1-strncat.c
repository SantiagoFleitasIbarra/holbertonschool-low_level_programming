#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @n: string
 *
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && src[i] < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
