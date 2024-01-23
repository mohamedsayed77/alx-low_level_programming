#include "dog.h"
#include <stdlib.h>

/**
* *_strcpy - a function that returns dest with a copy of
*  a string from src
* @src: pointer to array of string
* @dest: pointer to string to copy
* Return: pointer to the copied string
*/

char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i]; i++)
                dest[i] = src[i];
        dest[i] = '\0';
        return (dest);
}


/**
* _strlen - a function that gets the len of a string
* @str: pointer to the string to get the len
* Return: the length of the string
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}


/**
* new_dog - a function that creates a new dog
* @name: the dog name
* @age: the dog age
* @owner: the owner
* Return: struct pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (!name || age < 0 || !owner)
		return (NULL);

	ndog = (dog_t *) malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*ndog).owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->name = _strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcpy(ndog->owner, owner);

	return (ndog);
}
