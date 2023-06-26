#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @n: bytes
 * @src: first string
 * @dest: second string
 * Return: Always dest (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
