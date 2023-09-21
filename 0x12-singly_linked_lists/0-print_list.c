#include "lists.h"
/**
 * print_list - function name
 * @h : var
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t el;

	el = 0;
		while (h != NULL)
		{
			el++;
			if (h->str == NULL)
				printf("[%d] (nil)\n", h->len);
			else
				printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	return (el);
}
