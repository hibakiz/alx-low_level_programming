#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - checlk the code
 * @d: int
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "nil";
		if (d->owner == NULL)
			d->name = "nil";
		printf("Name: %s\nAge: %.6f\nOwner: %s\n",d->name, d->age, d->owner);
	}

}
