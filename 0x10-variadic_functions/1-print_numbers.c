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
	va_list ptr;

	if (n == 0)
		return;
	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("%d\n", va_arg(ptr, unsigned int));
	va_end(ptr);

}
