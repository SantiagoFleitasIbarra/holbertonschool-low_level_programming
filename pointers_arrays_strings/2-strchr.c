#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: Always NULL (Success)
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
