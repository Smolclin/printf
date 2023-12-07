#include "main.h"

/**
 * rot_13 - con to rot13
 * @args: arguements
 * Return: always 1
 */
 int rot_13(va_list args)
{
	int j, k, cntr = 0;
	int m = 0;
	char *l = va_arg(args, char *);
	char za[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char yb[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	if (l == NULL)
		l = "(null)";
	for (j = 0; l[j]; j++)
	{
		m = 0;
		for (k  = 0; za[k] && !m; k++)
		{
			if (l[j] == za[k])
			{
				put_c(yb[k]);
				cntr++;
				k = 1;
			}
		}
		if (!m)
		{
			put_c(l[j]);
			cntr++;
		}
	}
	return (cntr);
}
