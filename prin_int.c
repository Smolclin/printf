#include "main.h"

/**
 * prin_int - prints integer
 * @arg: arguement
 * Return: always 1
 */
int prin_int(va_list arg)
{
	int p = va_arg(arg, int);
	int nm, last = p % 10, digit, exp = 1;
	int j = 1;

	p = p / 10;
	nm = p;

	if (last < 0)
	{
		put_c('-');
		nm = -nm;
		p = -p;
		j++;
	}
	if (nm > 0)
	{
		while (nm / 10 != 0)
		{
			exp = exp * 10;
			nm = nm / 10;
		}
		nm = p;
		while (exp > 0)
		{
			digit = nm / exp;
			put_c(digit + '0');
			nm = nm - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	put_c(last + '0');
	return (j);
}
/**
 * prin_t - printing decimal
 * @arg: point of arguement
 * Return: always 0 (success)
 */

int prin_t(va_list arg)
{
	int p = va_arg(arg, int);
	int nm, last = p % 10, digit;
	int j = 1;
	int exp = 1;

	p = p / 10;
	nm = p;

	if (last < 0)
	{
		put_c('-');
		nm = -nm;
		p = -p;
		last = -last;
		j++;
	}
	if (nm > 0)
	{
		while (nm / 10 != 0)
		{
			exp = exp * 10;
			nm = nm / 10;
		}
		nm = p;
		while (exp > 0)
		{
			digit = nm / exp;
			put_c(digit + '0');
			nm = nm - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	put_c(last+ '0');
	return (j);
}
