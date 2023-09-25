#include "lists.h"
/**
 * add_nodeint_end - prints all the elements of a listint_t list.
 * @head: singly linked list.
 * @n : var
 * Return: number of elements in the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *cur;

	cur = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = new;
	return (new);
}
