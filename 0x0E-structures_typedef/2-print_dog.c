#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints contents of dog struct
 * @d: some dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
