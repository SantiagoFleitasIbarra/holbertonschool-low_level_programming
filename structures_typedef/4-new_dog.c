# include "dog.h"
# include <stdio.h>
# include <stdlib.h>
/***/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *sdog;
	char *a, *b;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
	{
		len1++;
	}
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
	{
		len2++;
	}
	sdog = malloc(sizeof(dog_t));
	if (sdog == NULL)
	{
		return (NULL);
	}
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(sdog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = name[i];
	}
	a[i] = '\0';
	sdog->name = a;
	sdog->age = age;
	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(sdog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		b[i] = owner[i];
	}
	b[i] = '\0';
	sdog->owner = b;
	return (sdog);
}
