#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - fun name
 * @name: var
 * @f: var
 * Return: sucess.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);

}
