#include "main.h"

/**
 * p_unsign - prints ints
 * @arg: arguement
 * Return: always 1
 */

int p_unsign(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int nm, lat = i % 10, digit, exp = 1;
	int j = 1;
	i = i / 10;
	nm = i;

	if (lat < 0)
	{
		put_c('-');
		nm = -nm;
		i = -i;
		lat = -lat;
		j++;
	}
	if (nm > 0)
	{
		while (nm / 10 != 0)
		{
			exp = exp * 10;
			nm = nm / 10;
		}
		nm = i;
		while (exp > 0)
		{
			digit = nm / exp;
			put_c(digit + '0');
			nm = nm - (digit * exp);
			exp = exp / 10;
		}
	}
	put_c(lat + '0');

	return (j);
}
