#include <stdlib.h>
#include "main.h"
/**
 * _putoct - convert unsinged int to octal and print it
 * @uinum: the number to be converted and printed
 *
 * Return: the number of character printed.
 */
int _putoct(uint uinum)
{
	char *ptr;
	uint cnt, i;
	char c = 'o';

	cnt = 0;
	if (uinum == 0)
	{
		_putchar('0');
		cnt++;
	}
	else
	{
		ptr = convrtbase(uinum, c);
		if (ptr != NULL)
		{
			for (i = 0; ptr[i] != '\0'; i++)
			{
				_putchar(ptr[i]);
				cnt++;
			}
		}
	}
	free(ptr);
	return (cnt);
}
