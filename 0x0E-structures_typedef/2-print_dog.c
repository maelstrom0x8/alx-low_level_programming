#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print dog info
 * Description: A function that prints a struct dog
 * @d: Dog struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ?
			d->name : "(nil)");
		printf("Age: ");
		if (d->age >= 0)
		{
			printf("%.6f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		printf("Owner: %s\n", d->owner != NULL ?
			 d->owner : "(nil)");
	}
}
