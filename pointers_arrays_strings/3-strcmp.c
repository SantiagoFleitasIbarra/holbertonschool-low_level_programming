#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: Always cmp (Success)
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}
	return (cmp);
}
