#include <stdlib.h>
#include "main.h"
/**
 * _putint - prints an integer
 * @inum: number to be printed
 *
 * Return: number of characters printed
 */
int _putint(int inum)
{
	uint i, cnt;
	char *ptr;

	cnt = 0;
	if (inum < 0)
	{
		inum = -1 * inum;
		_putchar('-');
		cnt++;
	}
	if (inum == 0)
	{
		_putchar('0');
		cnt++;
	}
	else
	{
		ptr = dectoprntdgt(inum);
		for (i = 0; ptr[i] != '\0'; i++)
		{
			_putchar(ptr[i]);
			cnt++;
		}
	}
	free(ptr);
	return (cnt);
}
