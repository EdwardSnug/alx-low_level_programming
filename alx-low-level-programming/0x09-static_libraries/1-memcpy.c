#include "main.h"
/**
  *_memcpy - A function that copies memory area
  *
  *@dest: destination for copied bytes of data
  *@src: contains the data to be copied
  *@n: Number of bytes to be copied
  *
  *Return: returns dest the copied bytes of data.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, m;

	i = 0;
	for (m = n; i < m; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
