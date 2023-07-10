# include <stdio.h>
# include "dog.h"
/**
 * init_dog - initializes a dog
 * 
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
