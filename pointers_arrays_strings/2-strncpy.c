#include "main.h"
/**
 * _strncpy -  function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: Always dest (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	while (n > j)
	{
		if(src[j] == '\0')
		{
			for (; j < n ; j++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}
