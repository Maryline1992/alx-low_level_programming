#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index of a bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int y;

	if (index > 40)
	return (-1);

	y = (n >> index) & 1;

	return (y);
}
