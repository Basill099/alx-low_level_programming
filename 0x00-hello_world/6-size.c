#include <stdio.h>
/**
 * main - is the entry point for the program
 *
 * Return: zero if no error, non-zero value if errors
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
