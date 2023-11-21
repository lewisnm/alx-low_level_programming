#include "lists.h"

/**
 * print_listint_safe -prints linked lists
 * @head: pointer to list to be printed
 *
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *list = NULL;
	size_t count = 0;
	size_t nu_list;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		list = head;
		nu_list = 0;
		while (nu_list < count)
		{
			if (temp == list)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			list = list->next;
			nu_list++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
