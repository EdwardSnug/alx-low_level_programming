#include "dog.h"
#include <stdlib.h>
/**
  *_strlen-Calculates the length of a string variable without
  *terminating null byte
  *
  *@src: Our string stored variable
  *
  *Return: returns the length of the string
  */
int _strlen(char *src)
{
	int length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
  *_strcpy - A function that copies one string to another string var
  *
  *@dest: Our destinatination string variable
  *@src: Our source string variable to be copied
  *
  *Return: returns our dest string variable with added null byte
  */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
  *new_dog - A function that creates a new dog using our struct data structure
  *
  *@name: The name of the dog
  *@age: The age of the dog
  *@owner: The guardian\caretaker of the dog
  *
  *Return: returns our record structure dog or NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen, ownerlen;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	(*dog).name = malloc(sizeof(char) * (namelen + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (ownerlen + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	(*dog).age = age;
	return (dog);
}
