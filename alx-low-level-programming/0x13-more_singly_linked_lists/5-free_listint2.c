#include "lists.h"
/**
  *free_listint2 - A function that frees a list and sets the head to NULL
  *
  *@head: A double pointer, a pointer to a pointer to our linked list
  */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
