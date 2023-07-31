#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain
 * index in a linked lists.
 * @head: first node in the linked lists.
 * @index: index of the node to be return.
 *
 * Return: pointer to the node we're looking for, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *temp = head;

	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}

	return (temp ? temp : NULL);
}
