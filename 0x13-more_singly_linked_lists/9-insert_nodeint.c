#include "lists.h"
/**
 * insert_nodeint_at_index - prints all the elements of a list_t list.
 * @head: singly linked list.
 * @idx: singly linked list.
 * @n: singly linked list.
 * Return: number of elements in the list.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new, *cur;

	cur = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cur;
		*head = new;
		return (new);
	}
	for (index = 0; index < (idx - 1); index++)
	{
		if (cur == NULL || cur->next == NULL)
		return (NULL);

		cur = cur->next;
	}

	new->next = cur->next;
	cur->next = new;

	return (new);
}
