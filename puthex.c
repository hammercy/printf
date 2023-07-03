#include <stdlib.h>
#include "main.h"
/**
 * _puthex - convert uint to hex and print it
 * @uinum: uint number to be converted and printed
 *
 * Return: returns the number of printed characters.
 */
int _puthex(uint uinum)
{
	char *ptr;
	uint i, cnt;
	char c = 'h';

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
