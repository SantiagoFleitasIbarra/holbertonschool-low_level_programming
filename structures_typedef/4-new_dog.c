# include "dog.h"
# include <stdio.h>
# include <stdlib.h>
/***/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *dog;
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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		a[i] = name[i];
	}
	dog->name = a;
	dog->age = age;
	
	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
	free(a);
	free(dog);
	return (NULL);
	}

	for (i = 0; i < len2; i++)
	{
		b[i] = owner[i];
	}
	b[i] = '\0';

	dog->owner = b;
	return (dog);

}
