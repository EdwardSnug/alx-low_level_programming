#include "lists.h"
/**
  *get_nodeint_at_index - A function that returns the nth node
  *
  *@head: A pointer to our linked list
  *@index: a node's respective index or position from top(0) in a list
  *
  *Return: returns node or null if a node doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
