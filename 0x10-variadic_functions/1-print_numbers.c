#include "variadic_functions.h"

/**
* print_numbers - fun name
* @n: var
* @separator: var
* Return: success.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		j = 0;
		if (separator != NULL)
		{
			while (separator[j])
			{
				printf("%c", separator[j]);
				j++;
			}
		}
	}
	printf("%d\n", va_arg(ptr, unsigned int));
	va_end(ptr);

}
