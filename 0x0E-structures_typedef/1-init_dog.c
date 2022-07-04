#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable type struct dog
 * @d: the dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
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
