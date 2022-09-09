#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{

	int A;

	long int B;

	long long int C;

	float D;

	char F;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(F));

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(A));

	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(B));

	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(C));

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(D));

	return (0);

}
