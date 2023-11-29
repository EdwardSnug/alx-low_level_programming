#include "lists.h"
/**
  *pop_listint - A function that deletes the head(first) node in a list
  *
  *@head: A double pointer; A pointer to a pointer to our linked list
  *
  *Return: returns the deleted element of the node or 0 if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int number;

	if (head == NULL)
		return (0);
	if (*head)
	{
		number = (*head)->n;
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	else
		return (0);
	return (number);
}
