#include "lists.h"
/**
 * add_nodeint - prints all the elements of a listint_t list.
 * @head: singly linked list.
 * @n : var
 * Return: number of elements in the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
