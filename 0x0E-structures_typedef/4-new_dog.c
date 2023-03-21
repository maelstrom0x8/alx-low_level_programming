#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create dog
 * Description: A function that creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Pointer to a new dog on success or NULL
 * if otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr  = (dog_t *)malloc(sizeof(dog_t));
	if (ptr != NULL)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;

		return (ptr);
	}
	return (NULL);
}
