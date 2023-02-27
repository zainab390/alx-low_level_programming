#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: int a
 * @b: int b
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
