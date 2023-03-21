#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog struct
 * Description: Free an allocated dog struct
 * @d: Dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
