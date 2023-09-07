#include <stdio.h>
/**
* main - Entry point
*
* return: Always 0 (success)
int main(void)
{
	printf("size of a char: %s byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int; %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n",  sizeof(long long int));
	printf("Size of a float: %5.2f byte(s)\n", sizeof(float));
	return (0);
}
