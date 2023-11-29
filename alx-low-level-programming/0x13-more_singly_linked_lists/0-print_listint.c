#include "lists.h"
/**
  * print_listint - A function that prints all the elements of our list
  * @h: A pointer to our linked list
  *
  *Return: returns all the elements or 0 if none is found.
  */
size_t print_listint(const listint_t *h)
{
	int number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number = number + 1;
		h = h->next;
	}
	return (number);
}
