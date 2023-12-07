#include "main.h"

/**
 * pointer - prints hex num
 * @vl: args
 * Return: always 1
 */

int pointer(va_list vl)
{
	void *n;
	char *r = "(nil)";
	long int y;
	int x;
	int j;

	n = va_arg(vl, void);
	if (n == NULL)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			put_c(r[j]);
		}
		return (j);
	}
	y = (unsigned long int)n;
	put_c('0');
	put_c('y');
	x = prin_ex_xtr(y);
	return (x + 2);
}
