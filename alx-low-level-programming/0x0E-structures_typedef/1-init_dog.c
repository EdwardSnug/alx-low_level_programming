#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - A function that initialises a variable of struct dog
  *
  *@d: A pointer variable to our record structure dog
  *@name: Name of dog
  *@age: Age of dog
  *@owner: Guardian or caretaker of the dog
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
