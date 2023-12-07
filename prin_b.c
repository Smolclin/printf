#include "main.h"

/**
 * prin_b - print binary nums
 * @vl: values
 * Return: always 0 (success)
 */

int prin_b(va_list vl)
{
	int flg = 0;
	int cnt = 0;
	int i, j = 1, k;
	unsigned int nm = va_arg(vl, unsigned int);
	unsigned int l;

	for (i = 0; i < 32; i++)
	{
		l = ((j << (31 - i)) & nm);
		if (l >> (31 - i))
			flg = 1;
		if (flg)
		{
			k = l >> (31 - i);
			put_c(k + 48);
			cnt++;
		}
	}
	if (cnt == 0)
	{
		cnt++;
		put_c('0');
	}
	return (cnt);
}
