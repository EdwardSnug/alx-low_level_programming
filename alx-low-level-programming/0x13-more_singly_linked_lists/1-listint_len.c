#include "lists.h"
/**
  *listint_len - A function that returns the number of elements in a list
  *
  *@h: A pointer to our linked list
  *
  *Return: returns the number of elements in a list
  */
size_t listint_len(const listint_t *h)
{
	int number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
