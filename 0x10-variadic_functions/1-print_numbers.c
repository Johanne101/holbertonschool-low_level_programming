#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers\n.
 * @separator: the string to be printed between numbers
 * @n: integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list box;
	unsigned int digit;

	if (separator == NULL)
		separator = "";

	va_start(box, n);

	for (digit = 0; digit < n; digit++)
	{
		printf("%d", va_arg(box, int));

		if (digit != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(box);
}
