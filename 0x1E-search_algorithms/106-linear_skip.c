#include "search_algos.h"
/**
 * linear_skip - a function that searches for a value in a
 * sorted skip list of integers
 * @list: is a pointer to the head of the skip list to search in
 * @value: is the value to search for
 * Return: a pointer on the first node where value is located
 * if value is not present in list or if head is NULL
 * the function should return NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *pnt;

	if (list == NULL)
		return (NULL);

	pnt = list;

	do {
		list = pnt;
		pnt = pnt->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)pnt->index, pnt->n);
	} while (pnt->express && pnt->n < value);

	if (pnt->express == NULL)
	{
		list = pnt;
		while (pnt->next)
			pnt = pnt->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)pnt->index);

	while (list != pnt->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
