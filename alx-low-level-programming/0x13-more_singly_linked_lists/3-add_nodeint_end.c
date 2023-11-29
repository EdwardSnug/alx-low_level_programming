#include "lists.h"
/**
  *add_nodeint_end - A function that adds a node at the end of a list
  *
  *@head: A double pointer; a pointer to our last/end node
  *@n: A constant character as our data in each node
  *
  *Return: returns adress of the new element or NULL if it fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *fill_node = *head;

	end_node = malloc(sizeof(listint_t));
	if (end_node)
	{
		end_node->n = n;
		end_node->next = NULL;
	}
	else
		return (NULL);
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (fill_node->next)
		fill_node = fill_node->next;
	fill_node->next = end_node;
	return (end_node);
}
