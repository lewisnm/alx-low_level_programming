#include "lists.h"

/**
 * free_listint_safe - frees space allocated in the heap
 * @h: this is the pointer to list
 *
 * Return:number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t girth = 0;
	int subt;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		subt = *h - (*h)->next;
		if (subt > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			girth++;
		}
		else
		{
			free(*h);
			*h = NULL;
			girth++;
			break;
		}
	}
	*h = NULL;

	return (girth);
}
