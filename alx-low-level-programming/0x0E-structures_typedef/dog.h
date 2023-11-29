#ifndef DOG_H
#define DOG_H
/**
  *struct dog - A record/structure consisting of different variables
  *
  *@name: Name of our given dog
  *@age: The age of the dog
  *@owner: The caretaker/guardian of the dog
  *
  *Description: A record data structure about a dog and
  *its different characteristics
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
int _strlen(char *src);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
