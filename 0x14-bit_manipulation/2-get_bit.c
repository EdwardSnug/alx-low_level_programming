#include "main.h"
/**
  *get_bit - a fxn that retrieves the value of a specific bit at a given index
  *
  *@n: Decimal number to search
  *@index: The bit you want to get
  *
  *Return: returns value of bit at index or -1 on error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
