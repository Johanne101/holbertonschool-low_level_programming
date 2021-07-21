#include "function_pointers.h"

/**
 * print_name - This will print name.
 * @name: the name to print.
 * @f: Function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
