#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/* Description: hearder library, structure function & prototypes */

/**
 * struct func - structure function
 * @c: character operator
 * @f: associated function
 */
typedef struct func
{
	char *c;
	void (*f)(va_list box);
} func_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
