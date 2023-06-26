#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to
 * uppercase.
 * @s: string
 * Return: s (Success)
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
