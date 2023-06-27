#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: Always counter (Success)
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, j, counter;

	counter = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[index])
			{
				counter++;
				break;
			}
		}
		if (accept[j] != s[index])
		{
		break;
		}
	}
	return (counter);
}
