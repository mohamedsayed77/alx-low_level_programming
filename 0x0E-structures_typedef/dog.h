#ifndef DOG_H
#define DOG_H

/**
* struct dog - Represents information about a dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner's name
*/

struct dog
{


	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);







#endif