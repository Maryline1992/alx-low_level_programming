#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string containing binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int y = 0;

	if (!b)
	return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
y = 2 * y + (b[i] - '0');
}
return (y);
}
