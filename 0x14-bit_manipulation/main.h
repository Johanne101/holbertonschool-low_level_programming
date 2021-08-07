#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
/*
 * Description: This is the header library
 * binary_to_uint - Converts a binary number to an unsigned int data type.
 * @b: Pointed to string of 0 and 1's.
 * Return: The converted number or,0 if b is NULL,
 * or, if there is one or more
 * characters in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);

#endif
