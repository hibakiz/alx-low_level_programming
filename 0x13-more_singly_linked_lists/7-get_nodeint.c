#include "lists.h"
/**
 * get_nodeint_at_index - prints all the elements of a list_t list.
 * @head: singly linked list.
 * @index: singly linked list.
 * Return: number of elements in the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (n == index)
			return (head);
		head = (head)->next;
		n++;
	}
	return (NULL);
}
