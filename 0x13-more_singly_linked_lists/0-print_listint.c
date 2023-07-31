#include "lists.h"

/**
 * print_listint - prints all the elements of a linked lists.
 * @h: linked list of type listint_t to the print.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
