#include "variadic_functions.h"

/**
* print_strings - fun name
* @n: var
* @separator: var
* Return: success.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (ptr == NULL)
			printf("nil");
		else
			printf("%s", va_arg(ptr, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(ptr);
	printf("\n");

}
