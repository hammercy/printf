#include <stdlib.h>
#include "main.h"
/**
 * _putuint - prints unsigned int to std output
 * @uinum: the number to be printed
 *
 * Return: return the number of decimal place(digits) printed
 */
int _putuint(uint uinum)
{
	uint i, cnt;
	char *ptr;

	cnt = 0;
	if (uinum == 0)
	{
		_putchar('0');
		cnt++;
	}
	else
	{
		ptr = dectoprntdgt(uinum);
		for (i = 0; ptr[i] != '\0'; i++)
		{
			_putchar(ptr[i]);
			cnt++;
		}
	}
	free(ptr);
	return (cnt);
}
