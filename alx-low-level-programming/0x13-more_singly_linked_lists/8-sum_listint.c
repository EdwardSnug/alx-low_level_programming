#include "lists.h"
/**
  *sum_listint - a function that calculates the sum of all the data in a list
  *
  *@head: A pointer to our singly linked list
  *
  *Return: returns total sum of all the elements or zero if list is empty
  */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (0);
	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
