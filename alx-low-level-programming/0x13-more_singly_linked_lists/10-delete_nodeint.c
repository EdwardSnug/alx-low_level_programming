#include "lists.h"
/**
  *delete_nodeint_at_index - A function that deletes a node at a given position
  *
  *@head: A double pointer; a pointer to a pointer to our list
  *@index: The index of the list where the given node should be deleted
  *
  *Return: returns 1 on success, -1 if it fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *temp;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	/*Traverse to the node before the desired index*/
	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	/**Index out of bounds*/
	if (!temp || !(temp->next))
		return (-1);

	prev_node = temp;
	temp = temp->next;
	prev_node->next = temp->next;
	free(temp);

	return (1);
}
