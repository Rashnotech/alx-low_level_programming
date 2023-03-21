#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * struct new_dog - Creating a new member struct
 * @name : members name
 * @age: member age
 * @owner: member owner
 *
 * Return: a struct of member or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;
	int len1, len2;

	mem = malloc(sizeof(dog_t));
	len1 = strlen(name);
	len2 = strlen(owner);
	mem->name = malloc(sizeof(char) * len1 + 1);
	if (mem->name == NULL)
	{
		free(mem);
		return (NULL);
	}
	mem->owner = malloc(sizeof(char) * len2 + 1);
	if (mem->owner == NULL)
	{
		free(mem);
		free(mem->owner);
		return (NULL);
	}
	strcpy(mem->name, name);
	strcpy(mem->owner, owner);
	mem->age = age;
	return (mem);
}
