#include "lists.h"
/**
* insert_dnodeint_at_index - print the list
* @h: DLL
* @idx: int
* @n: int
* Return: number
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *cur, *new;

	if (*h == NULL || h == NULL)
		return (NULL);
	cur = *h;
	while (cur)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->prev = cur;
			new->next = cur->next;
			cur->next = new;
			new->n = n;

			return (new);
		}
		i++;
		cur = cur->next;
	}
	return (NULL);
}
/**
* dll_len - print the list
* @h: DLL
* Return: number
*/
unsigned int dll_len(const dlistint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
