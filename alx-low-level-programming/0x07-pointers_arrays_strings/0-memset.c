#include "main.h"
/**
  *_memset - A function that fills memory with constant byte.
  *
  *@s: Points to the memory area with the bytes.
  *@b: The constant byte value
  *@n: Fills the first 'n' bytes of the memory area pointed by s.
  *
  *Return: returns s containing the constant byte values
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
