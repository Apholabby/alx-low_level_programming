#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - makes a new struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name;
	char *_owner;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->age = age;

	if (name)
	{
		_name = malloc(sizeof(char) * (strlen(name) + 1));
		if (!_name)
		{
			free(d);
			return (NULL);
		}
		d->name = strcpy(_name, name);
	}
	else
		d->name = NULL;

	if (owner)
	{
		_owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (!_owner)
		{
			free(_name);
			free(d);
			return (NULL);
		}
		d->owner = strcpy(_owner, owner);
	}
	else
		d->owner = NULL;

	return (d);
}
