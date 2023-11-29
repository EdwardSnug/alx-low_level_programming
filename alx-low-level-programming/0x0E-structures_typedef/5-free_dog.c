#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - A function that frees up memory allocatd to struct dog
  *
  *@d: Our struct dog recordvariable name
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
