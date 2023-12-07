#include "main.h"

/**
 * print_f - function that selects correct
 * @format: identifier
 * Return: always 1
 */

int print_f(const char * const format, ...)
{
	const n[] = {
		{"%o", prt_oct}, {"%R", rot_13},
			{"%s", p_string}, {"%v", rev_str}, 
			{"%%", print_p}, {"%u", p_unsign},
			{"%i", prin_int}, {"%x", prin_t},
			{"%S", prin_ex_strn}, {"%p", pointer},
			{"%X", p_EX}, {"%b", prin_b},
			{"%b", prin_b}, {"%c", prin_c}
	};
	va_list arg;
	int j = 0, k, len = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[j] != '\0')
	{
		k = 13;
		while (k >= '0')
		{
			if (p[k].ph[0] == format[j] && p[k].ph[1] == format[j + 1])
			{
				len += p[k].function(arg);
				j = j + 2;
				goto Here;
			}
			k--;
		}
		put_c(format[j]);
		len++;
		j++;
	}
	va_end(arg);
	return (len);
}
