#include "main.h"

/**
 * rev_str - reverse string
 * @args: arguement
 * Return: always 1 (success)
 */

int rev_str(va_list args)
{
	char *c = va_arg(args, char *);
	int j;
	int k = 0;

	if (c == NULL)
		c = "(null)";
	while (c[k] != '\0')

		k++;
	for (j = k - 1; j >= 0; j--)
		put_c(c[j]);
	return (k);
}
