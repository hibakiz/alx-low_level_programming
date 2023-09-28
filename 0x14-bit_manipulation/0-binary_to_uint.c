#include "main.h"

/**
 * binary_to_uint - Function name
 * @b: var
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
			result = result << 1;
		else if (b[i] == '1')
			result = result << 1 | 1;
	}
	return (result);
}
