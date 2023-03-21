#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog information
 * @name: Dog's name
 * @owner: Owner's name
 * @age: Dogs' age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
