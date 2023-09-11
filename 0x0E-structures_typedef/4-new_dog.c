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
	char *namecpy;
	char *ownercpy;
	dog_t *new;


	size_name = strlen(name);
	size_owner = strlen(owner);
	namecpy = malloc(size_name);
	ownercpy = malloc(size_owner);
	strcpy(namecpy, name);
	strcpy(ownercpy, owner);
	new = malloc(sizeof(dog_t));
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
