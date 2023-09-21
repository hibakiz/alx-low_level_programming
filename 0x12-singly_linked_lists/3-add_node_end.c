#include "lists.h"
/**
 * add_node_end - prints all the elements of a list_t list.
 * @head: singly linked list.
 * @str : var
 * Return: number of elements in the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new, *cur;

	cur = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = strlen(str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
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
