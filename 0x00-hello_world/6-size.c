#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char type: %d byte(s)\n", sizeof(char));
	printf("Size of an int type: %d byte(s)\n", sizeof(int));
	printf("Size of a long type: %d byte(s)\n", sizeof(long));
	printf("Size of a long long type: %d byte(s)\n", sizeof(long long));
	printf("Size of a float type: %d byte(s)\n", sizeof(float));
	return (0);
}
