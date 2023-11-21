#include "lists.h"

/**
 * sum_listint - adds all the data in a linked list
 * @head: pointer to the list
 *
 * Return: sum or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
