#include "variadic_functions.h"

/**
 * print_strings - function that prints strings\n.
 * @separator: String to be printed between strings.
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list box;
	unsigned int blah;
	char *ney;

	if (separator == NULL)
		separator = "";

	va_start(box, n);

	for (blah = 0; blah < n; blah++)
	{
		ney = va_arg(box, char *);

		if (ney == NULL)
			printf("(nil)");

		else
			printf("%s", ney);

		if (blah != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(box);
}
