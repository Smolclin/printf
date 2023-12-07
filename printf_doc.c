#include "main.h"

/**
 * _printf - function producing output
 * according to format
 * @format: the input to be outputted
 * Return: format output
 */
int _printf(const char *format, ...)
{
	unsigned int j, count_str, num = 0;

	va_list the_arg;

	va_start(the_arg, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			put_c(format[j]);
		}
		else if (format[j + 1] == 'c')
		{
			put_c(va_arg(the_arg, int));
			j++;
		}
		else if (format[j +  1] == 's')
		{
			count_str = puter(va_arg(the_arg, char *));
			j++;
			num += (count_str - 1);
		}
		else if (format[j + 1] == '%')
		{
			put_c('%');
		}
		num += 1;
	}
	va_end(the_arg);
	return (num);
}
