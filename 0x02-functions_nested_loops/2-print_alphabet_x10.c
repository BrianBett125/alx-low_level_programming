#include "main.h"
/**
  * main -entry point
  * description: prints the alphabets 10 times
  * return: always (0) success
  */
void print_alphabet_x10(void)
	/* the alphabets are to be printed 10 times */
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
