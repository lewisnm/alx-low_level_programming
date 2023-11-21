#include "lists.h"

/**
 * add_nodeint - adds new nodes to the beggining of a linked list
 * @head: the pointer to the first node
 * @n: data for the node
 *
 * Return: the addresse of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t * new_node;

	new_node = malloc(size of(listint_s));
	if (!new_node || !head)
	{
		return (NULL);
	
	new_node->next = *head;
	new_node->n = n;

	head = new_node;
	return (new_node);
}
