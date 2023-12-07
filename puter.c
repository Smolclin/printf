#include "main.h"

/**
 * puter - string printer
 *
 * @s: string
 * Return: bytes no
 */

int puter(char *s)
{
	int num = 0;

	if (s)
	{
		for (num = 0; s[num] != '\0'; num++)
		{
			put_c(s[num]);
		}
	}
	return (num);
}
