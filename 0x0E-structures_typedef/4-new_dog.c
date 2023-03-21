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
	char *ncpy;
	char *ocpy;

	ncpy = name;
	ocpy = owner;

	ptr  = (dog_t *)malloc(sizeof(dog_t));
	if (ptr != NULL)
	{
		ptr->name = ncpy;
		ptr->age = age;
		ptr->owner = ocpy;

		return (ptr);
	}
	return (NULL);
}
