#include "main.h"

/**
 * print_binary - Function name
 * @n: var
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int i, len;
	unsigned long int bit;

	len = sizeof(n) * 8;
	for (i = len - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}
