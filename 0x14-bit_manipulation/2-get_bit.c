#include "main.h"

/*
 * get_bit - Function returns value of a bit at a given index.
 * @n: holds the value string.
 * @index: location to retrieve the value.
 *
 * Return: value of the bit index, or `-1` if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index != 0)
		return(1);
	else
	return (((1 << index) -1) & (n >> (index -1)));
}
