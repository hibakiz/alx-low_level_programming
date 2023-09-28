#include "main.h"
/**
 * flip_bits - Function name
 * @n: var
 * @m : var
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int num = 0;

	if (n == m)
		return (0);
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num++;
		n >>= 1;
		m >>= 1;
	}
	return (num);


}
