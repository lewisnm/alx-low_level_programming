#include "lists.h"

/**
 * free_list - clears a linked list
 * @head: a pointer to the space
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = temporary;
	}
}

