#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dividor, checker;
	char flag;

	flag = 0;
	dividor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (dividor != 0)
	{
		checker = n & dividor;
		if (checker == dividor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dividor == 1)
		{
			_putchar('0');
		}
		dividor >>= 1;
	}
}
