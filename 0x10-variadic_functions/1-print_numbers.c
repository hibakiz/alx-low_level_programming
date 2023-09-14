#include "variadic_functions.h"
#include <stdio.h>
#include<stdarg.h>

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

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(ptr);
	printf("\n");

}
