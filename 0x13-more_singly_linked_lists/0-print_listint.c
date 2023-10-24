#include "lists.h"
/**
 * print_listint - print the int data in the singly linked list
 *
 * @h: head pointer to the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
