#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: singly linked list.
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
