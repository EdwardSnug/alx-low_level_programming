#include "lists.h"
/**
  *free_list - A function that frees up memory allocated to a node
  *
  *@head: A pointer to our linked list
  *
  */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
