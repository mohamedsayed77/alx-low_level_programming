#include <stdio.h>
#include "dog.h"

/**
* free_dog - a fucntion that free dogs
* @d: pointer to the struct of type dog
* Return: Always 0
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(dog->name);
		free(d);
}
