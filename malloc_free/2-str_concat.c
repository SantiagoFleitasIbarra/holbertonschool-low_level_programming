# include "main.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: Always conc (Success)
*/
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *conc;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		conc[i + len1] = s2[i];
	}
	conc[i + len1] = '\0';
	return (conc);
