#include "lists.h"
/**
* get_dnodeint_at_index - print the list
* @head: DLL
* @index: int
* Return: number
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur;

	cur = head;
		while (cur)
		{
			if (i != index)
			{
				i++;
				cur = cur->next;
			}
			else
				return (cur);
		}
	return (NULL);
}
