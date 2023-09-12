#include "main.h"
/**
  * main - entry point
  * description: 'writing alphabets in lower case using _putchar'
  * return: always (0) successful
  */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
