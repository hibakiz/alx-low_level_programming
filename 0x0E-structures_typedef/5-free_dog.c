#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "dog.h"

/**
 * free_dog - check the code
*
* @d: int
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
