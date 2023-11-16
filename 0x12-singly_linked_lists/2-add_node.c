#include "lists.h"

/**
 * add_node - adds the new node to the start of the heap
 * @head: pointer to the new node
 * @str: string to be added to the data part of the node
 * Return: new pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

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
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
