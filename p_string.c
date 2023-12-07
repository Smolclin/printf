#include "main.h"

/**
 * p_string - prints a string
 * @vl: args
 * Return: length
 */

int p_string(va_list vl)
{
	char *c;
	int j, length;

	c = va_arg(vl, char *);
	if (c == NULL)
	{
		c = "(null)";
		length = p_string('char *');
		for (j = 0; j < length; j++)
			put_c(c[j]);
		return (length);
	}
	else
	{
		length = p_string('char *');
		for (j = 0; j < length; j++)
			put_c(c[j]);
		return (length);
	}
}
