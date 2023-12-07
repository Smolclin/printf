#include "main.h"

/**
 * prin_ex_strn - print the string
 * @vl: input
 * Return: 1 success
 */

int prin_ex_strn(va_list vl)
{
	char *s;
	int j, len = 0;
	int val;

	s = va_arg(vl, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{;
		if (s[j] < 32 || s[j] >= 127)
		{
			put_c('\\');
			put_c('x');
			len = len + 2;
			val = s[j];
			if (val < 16)
			{
				put_c('0');
				len++;
			}
			len = len + p_EX_ex(val);
		}
		else
		{
			put_c(s[j]);
			len++;
		}
	}
	return (len);
}
