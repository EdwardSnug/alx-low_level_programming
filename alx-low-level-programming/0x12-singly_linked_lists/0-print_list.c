#include "lists.h"
#include <stdio.h>
/**
  *print_list - A function that prints all the elements of
  *our singly linked list
  *
  *@h: A pointer to our linked list.(Treats our list as its node)
  *
  *Return: returns the number of nodes before null is specified
  */
size_t print_list(const list_t *h)
{
	int nodes, node;

	node = 1;
	nodes = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes = node + nodes;
	}
	return (nodes);
}
