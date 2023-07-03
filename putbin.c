#include <stdlib.h>
#include "main.h"
/**
 * _putbin - convetrs decimal to binary and printit stdout
 * @uinum: number to be converted to binary
 *
 * Return: returns the number chars printed.
 */
int _putbin(uint uinum)
{
	uint i;
	char c = 'b';
	char *ptr;
	uint cnt ;

	cnt = 0;
	if (uinum == 0)
	{
		_putchar('0');
		cnt++;
	}
	else
	{
		ptr = convrtbase(uinum, c);
		if(ptr != NULL)
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
