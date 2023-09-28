#include "main.h"
/**
 * set_bit - Function name
 * @n: var
 * @index : var
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31 || n == NULL)
		return (-1);

	*n |= (1 << index);
	return (1);
}
