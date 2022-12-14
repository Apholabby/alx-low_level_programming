#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - info on dog
 * @name: dogs name
 * @age: age of the dog in float
 * @owner: name of the owner of the dog
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

/* function for typedef dog_t */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
