#include "lists.h"

/**
 * print_list - function name
 * @h : var
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t el = 0;

		for (el = 0; h != NULL; el++)
		{
			el++;
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	return (el);
}
