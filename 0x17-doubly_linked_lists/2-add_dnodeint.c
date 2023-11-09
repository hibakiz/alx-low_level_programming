#include "lists.h"
/**
* add_dnodeint - print the list
* @head: DLL
* @n: int
* Return: number
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	new->next = cur;
	new->prev = NULL;
	cur->prev = new;
	*head = new;
	return (new);
}
