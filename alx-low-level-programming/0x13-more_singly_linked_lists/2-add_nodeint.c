#include "lists.h"
/**
  *add_nodeint -  Afunction that adds a node at the beggining of a list
  *
  *@head: A double pointer; a pointer to our first element of the list
  *@n: A constant integer as the data available in our node
  *
  *Return: returns adress of the new element or null if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
		return (NULL);
	return (*head);
}
