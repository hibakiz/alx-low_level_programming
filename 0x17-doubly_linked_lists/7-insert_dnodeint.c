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
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		cur->prev = new;
		new->prev = NULL;
		new->next = cur;
		new->n = n;
		*h = new;
		return (new);

	}
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
