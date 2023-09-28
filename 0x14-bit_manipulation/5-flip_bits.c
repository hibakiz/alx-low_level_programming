#include "main.h"
/**
 * flip_bits - Function name
 * @n: var
 * @m : var
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int num = 0, i = 0, bit1, bit2;

	for (i = 31; i >= 0; i--)
	{
		bit1 = n >> i;
		bit2 = m >> i;
		if ((bit1 & 1) != (bit2 & 1))
			num++;
	}
	return (num);


}
