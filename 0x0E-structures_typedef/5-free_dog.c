#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function that frees memory allocated for function dog
  * @d: struct dog to be free
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
