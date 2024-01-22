#include <stdio.h>
#include "dog.h"

/**
* init_dog - a fucntion that initialize a variables of struct
* @d: pointer to struct of type dog
* @name: takes string to initialize it to the struct
* @age: take a float number to initialize it to the struct
* @owner: takes a string to initialize it to the struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
