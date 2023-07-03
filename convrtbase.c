#include <stdlib.h>
#include "main.h"
/**
 * convrtbase - converts from base 10 to any other base.
 * @uinum:base 10 number to be convertd
 * @c: the character that indicate to what base to be changed the uninum.
 *
 * Return: returns array of converted character that are printable by putchar.
 */
char *convrtbase(uint uinum, char c)
{
	uint base = 10, dgtcnt = 0;
	unsigned long int maxnum = 1;
	int dgtindx;
	char arr[17] = "0123456789abcdef";
	char *ptr;

	if (c == 'o' || c == 'O')
		base = 8;
	else if (c == 'h' || c == 'H')
		base = 16;
	else if (c == 'b' || c == 'B')
		base = 2;
	while (maxnum < uinum)
	{
		maxnum = maxnum * base;
		dgtcnt++;
	}
	ptr = malloc((dgtcnt + 1) * sizeof(*ptr));
	dgtindx = (int)dgtcnt;
	ptr[dgtindx] = '\0';
	dgtindx--;
	while (uinum != 0)
	{
		ptr[dgtindx] = arr[(uinum % base)];
		uinum = uinum / base;
		dgtindx--;
	}
	return (ptr);
}
