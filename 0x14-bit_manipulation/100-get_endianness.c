#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *boy;

	a = 1;
	boy = (char *)&a;
	return (*boy);
}
