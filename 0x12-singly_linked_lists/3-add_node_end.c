#include "lists.h"

/**
 * add_node_end - adds the new node to the end of the heap
 * @head: the start of the list
 * @str: string to be added to the data part of the node
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element, *temp;

	if (str == NULL)
		return (NULL);

	new_element = (list_t *)malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}

	new_element->len = strlen(str);
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_element;
	}
	return (new_element);
}
