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
	dlistint_t *cur, *new, *prev;

	if (idx >= dll_len(*h) || *h == NULL || h == NULL)
		return (NULL);
	cur = *h;
	prev = cur->prev;
	while (cur)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			prev->next = new;
			cur->prev = new;
			new->n = n;
			new->next = cur;
			new->prev = prev;
			return (new);
		}
		i++;
		cur = cur->next;
		prev = cur->prev;
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
