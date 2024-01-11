#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *k;
	unsigned int p;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		k = *h;
		p = 1;
		if (k != NULL)
			while (k->prev != NULL)
				k = k->prev;
		while (k != NULL)
		{
			if (p == idx)
			{
				if (k->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = k->next;
						newnode->prev = k;
						k->next->prev = newnode;
						k->next = newnode;
					}
				}
				break;
			}
			k = k->next;
			p++;
		}
	}

	return (newnode);
}
