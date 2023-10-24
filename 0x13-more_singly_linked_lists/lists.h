#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - self referencial struct
 * for creating nodes in as sigly linked list
 * @n: integer values
 * @next: self referencial pointer
 * pointer to the node of a list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);

#endif
