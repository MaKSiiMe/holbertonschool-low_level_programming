#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(char*));
	printf("Size of a int: %lu byte(s)\n", sizeof(int*));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int*));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int*));
	printf("Size of a float: %lu byte(s)\n", sizeof(float*));
	return(0);
}
