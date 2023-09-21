#include "lists.h"

/**
 * print_list - function name
 * @h : var
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{

	int element = 0, i;

		while (1)
		{
			element++;
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
			{
				printf("[%d] ", h->len);
				for (i = 0; h->str[i] != '\0'; i++)
				printf("%c", h->str[i]);
				printf("\n");
			}
			h = h->next;
			if (h == NULL)
				break;

		}
	return (element);
}

