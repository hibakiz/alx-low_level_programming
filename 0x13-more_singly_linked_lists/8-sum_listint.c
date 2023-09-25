#include "lists.h"
/**
 * sum_listint - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
