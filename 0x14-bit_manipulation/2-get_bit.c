#include "main.h"

/**
 * get_bit - Function name
 * @n: var
 * @index : var
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n)
	{
		bit = (n >> index) & 1;
		if ((bit == 0 || bit == 1))
			return (bit);
	}
		return (-1);
}
