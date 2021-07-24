#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * @format: lists types of args passed to the function
 *
 * Return: Success
 */
void print_all(const char * const format, ...)
{
	char call, *buya, *separator = "";
	unsigned int num = 0;

	va_list box;

	va_start(box, format);

	while (format && format[num])
	{
		call = format[num];
		switch (call)
		{
			case 'c':
				printf("%s%c", separator, va_arg(box, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(box, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(box, double));
				separator = ", ";
				break;
			case 's':
				buya = va_arg(box, char *);
				if (!buya)
					buya = "(nil)";
				printf("%s%s", separator, buya);
				separator = ", ";
				break;
		}
		num++;
	}
	printf("\n");

	va_end(box);
}
