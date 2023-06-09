#include "lists.h"

/**
 * listint_len - returns the number of elements in alinked lists.
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}

	return (num);
}
