#include "main.h"

/**
 * print_most_number - print the numbers 0 to 9
 * without 1 and 4
 * Return: Alawys 0
 */
void print_most_numbers(void);
{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		
		a++
	}
	_putchar('\n');
}
