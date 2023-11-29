#include "lists.h"
/**
  *free_listint - A function that frees a list
  *
  *@head: A pointer to our linked list
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
