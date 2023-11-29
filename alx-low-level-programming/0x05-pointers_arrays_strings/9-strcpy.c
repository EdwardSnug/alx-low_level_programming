#include "main.h"
/**
  *_strcpy - A function that copies to where it is pointed to
  *
  *@dest: This is where our src copies to
  *@src: Our source to copy to dest
  *
  *Return: dest copied string
  */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	*(dest + length) = '\0';
	return (dest);
}

