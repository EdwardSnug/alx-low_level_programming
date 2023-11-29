#include "lists.h"
/**
  *list_len - A function that returns the number of elements
  *
  *@h: A pointer to our linked list
  *
  *Return: returns the number of elements in the linked list
  */
size_t list_len(const list_t *h)
{
	int node, nodes;

	node = 1;
	nodes = 0;
	while (h)
	{
		nodes = node + nodes; /**nodes++*/
		h = h->next;
	}
	return (nodes);
}
