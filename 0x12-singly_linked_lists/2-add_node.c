#include "lists.h"
/**
 * add_node - prints all the elements of a list_t list.
 * @head: singly linked list.
 * @str : var
 * Return: number of elements in the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
