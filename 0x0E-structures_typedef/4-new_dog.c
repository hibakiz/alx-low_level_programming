#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "dog.h"

/**
 * new_dog - check the code
* @name: int
 * @age: int
 * @owner: int
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size_name, size_owner;
	dog_t *new;

	size_name = strlen(name);
	size_owner = strlen(owner);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(sizeof(char) * (size_name));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (size_owner));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
