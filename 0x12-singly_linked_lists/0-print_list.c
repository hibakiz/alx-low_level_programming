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
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		el++;
	}
	return (el);
}
