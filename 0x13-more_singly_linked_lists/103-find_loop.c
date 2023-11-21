#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: pointer to the list
 *
 * Return: addresse of the node where the loop starts or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gent = head;
	listint_t *swif = head;

	if (!head)
		return (NULL);

	while (gent && swif && swif->next)
	{
		swif = swif->next->next;
		gent = gent->next;

		if (swif == gent)
		{
			gent = head;
			while (gent != swif)
			{
				gent = gent->next;
				swif = swif->next;
			}
			return (swif);
		}
	}
	return (NULL);
}
