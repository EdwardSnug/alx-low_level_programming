#include "lists.h"
#include <string.h>
/**
  *add_node - A function that adds a new node to the beginning of our
  *linked list
  *
  *@head: A double ptr to our linked list, a ptr to our head ptr
  *@str: New string to add to the node, in this fxn we are just copying
  *the given previous string given in our linked list
  *
  *Return: The adress of the new element or NULL if ir fails.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_length;

	/*Find str length*/
	str_length = 0;
	while (str[str_length] != '\0')
	{
		str_length++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = str_length;
		new_node->next = (*head);
		(*head) = new_node;
	}
	else/* IF NO new_node is specified*/
	{
		return (NULL);
	}
	return (*head);
}
