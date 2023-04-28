#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: pointer to head node of the list
 */

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
