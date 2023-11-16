#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * struct my_list - this is  a singly linked list
 * @str: pointer to the string
 * @len: number of chars being outputed
 * @next: pointer to the next nodde
 *
 */
typedef struct my_list
{
	char *str;
	unsigned int len;
	struct my_list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) word_out();

#endif
