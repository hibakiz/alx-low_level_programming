#include "main.h"

/**
 * print_binary - Function name
 * @n: var
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int i, bit, test = 0;

	for (i = 31; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit || test || i == 0)
		{
			_putchar(bit + '0');
			test = 1;
		}
	}
	if (!test)
		_putchar('0');
}
