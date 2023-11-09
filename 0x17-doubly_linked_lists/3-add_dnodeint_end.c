#include "lists.h"
/**
* add_dnodeint_end - print the list
* @head: DLL
* @n: int
* Return: number
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *new;

	cur = *head;
	if (head == NULL)
		return (NULL);

	if (cur == NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = cur;
	new->next = NULL;
	cur->next = new;
	*head = new;
	return (new);
}
