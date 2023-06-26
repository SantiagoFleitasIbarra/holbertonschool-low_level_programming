#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings.
 * @n: bytes
 * @src: first string
 * @dest: second string
 * Return: Always dest (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n > 0)
	{
		dest[j] = '\0';
	}
	return (dest);
}
