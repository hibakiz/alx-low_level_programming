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
	if (head == NULL)
		return (0);
	while (*head != NULL)
	{
		if (index == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			/*(*head)->next = new;
			new->next = (*head)->next;
			*/
			new->n = n;
			*head = cur;
			return (new);
		}
		else
		*head = (*head)->next;
		index++;
	}
	*head = cur;
	return (NULL);
}
