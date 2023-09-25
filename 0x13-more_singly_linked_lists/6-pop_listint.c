#include "lists.h"
/**
 * pop_listint - prints all the elements of a list_t list.
 * @head: singly linked list.
 * Return: number of elements in the list.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
