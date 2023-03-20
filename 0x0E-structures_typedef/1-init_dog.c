#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializing struct (dog)
 * @d: an address for struct pointer
 * @name: member name
 * @age: member age
 * @owner: member owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	&d->age = age;
	d->owner = owner;
}
