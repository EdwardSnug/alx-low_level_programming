#include "lists.h"
#include <string.h>
/**
  *add_node_end - A function that add a node to the end of a linked list
  *
  *@head: A double pointer, a pointer to a pointer of list_t
  *(the ptr is used to access the list)
  *@str: A constant stored string varible to be copied across any new nodes
  *
  *Return: returns the added end node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end_node = *head;
	unsigned int str_length = 0;

	if (str == NULL)
		return (NULL);
	/**Find the string length*/
	while (str[str_length] != '\0')
		str_length++;
	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = str_length;
		new_node->next = NULL;
	}
	else
		return (NULL);
	/**If the linked list is empty*/
	if (*head == NULL)
	{
		/**Make the new node the first and only node on the list*/
		*head = new_node;
		return (new_node);
	}
	/*If linked list isnt empty function transverses until temp->next is NULL*/
	else
	{
		while (end_node->next)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (new_node);
}
