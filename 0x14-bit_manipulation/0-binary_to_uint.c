#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: If b is NULL or contains chars not 0 or 1, 0.
 *         Otherwise, the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		numb <<= 1;
		numb = numb + b[length] - '0';
		length++;
	}

	return (numb);
}
