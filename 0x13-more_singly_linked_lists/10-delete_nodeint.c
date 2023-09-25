#include "lists.h"
/**
 * delete_nodeint_at_index - prints all the elements of a list_t list.
 * @head: singly linked list.
 * @index: singly linked list.
 * Return: number of elements in the list.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *cur, *prev;

	cur = *head;
	if (cur == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	while (cur)
	{
		if (n == index)
		{
			prev->next = cur->next;
			free(cur);
			return (1);
		}
		prev = cur;
		cur = cur->next;
		n++;
	}
	return (-1);
}
