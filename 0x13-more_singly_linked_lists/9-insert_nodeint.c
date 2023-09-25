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
	listint_t *new, *cur, *prev;

	cur = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		if (index == idx)
		{
			if (new == NULL)
				return (NULL);
			prev->next = new;
			new->next = *head;
			
			*head = cur;
			return (new);
		}
		else
		prev = *head;
		*head = (*head)->next;
		index++;
	}
	*head = cur;
	return (NULL);
}
