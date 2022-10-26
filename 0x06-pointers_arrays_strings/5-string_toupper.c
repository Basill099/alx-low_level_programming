#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string
 * @n: pointer
 * Return: char
 **/



char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] = 32;
		1++;
	}

	return (n);
}
