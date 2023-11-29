#include "lists.h"
/**
  *insert_nodeint_at_index - A function that inserts a node at a given position
  *
  *@head: A double pointer; a pointer to a pointer to our list
  *@idx: The index of the list where the new node should be added
  *@n: The costant integer value to add its the same across our list
  *
  *Return: returns the inserted node or NULL if index is not found
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	/*new_node is inserted at beginning of list as the new head of the list*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/*Initialize temp to the head of the list*/
	temp = *head;
	for (i = 0; temp && i < idx; i++)
	{
		prev_node = temp;
		temp = temp->next;
	}
	/**an index out of bounds*/
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	prev_node->next = new_node;
	new_node->next = temp;

	return (new_node);
}
