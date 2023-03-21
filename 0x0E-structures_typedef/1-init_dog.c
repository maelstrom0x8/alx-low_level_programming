#include "dog.h"

/**
 * init_dog - Initialize dog struct
 * Description: A function that initializes a dog
 * struct with the provided parameters
 * @d: The dog struct to populate
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
