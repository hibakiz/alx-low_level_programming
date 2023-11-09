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
	while (cur->next != NULL)
		cur = cur->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	cur->next = new;
	new->prev = cur;
	new->next = NULL;
	return (new);
}
