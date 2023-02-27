#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int nom = 0;
	int o;

	while (*s != '\0')
	{
		nom++;
		s++;
	}
	s--;
	for (o = nom; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

