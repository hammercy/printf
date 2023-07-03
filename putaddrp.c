#include <stdlib.h>
#include "main.h"
/**
 * _putaddrp - prints address of a memory
 * @addr: adress of memomory to be printed
 *
 * Return: number of addrs characters printed.
 */
int _putaddrp(void *addr)
{
	char arr[15];
	char *ptr = "0123456789abcdef";
	uint numhexdgt = 20;
	uint cnt = 0;
	uint i, j;
	uint mask = 15;
        uint tmp = 0;
	size_t paddr;

	paddr = (unsigned long int)addr;
	j = 14;
	arr[0] = '0';
	arr[1] = 'x';
	arr[j--] = '\0';
	cnt = cnt + 2;
	for (i = 0; i < numhexdgt; i++)
	{
		tmp = (uint)(paddr);
		tmp = tmp & mask;
		paddr = paddr >> 4;
		arr[j - i] = ptr[tmp];
	}
	for (i = 0; arr[i] != '\0'; i++)
	{
		_putchar(arr[i]);
		cnt++;
	}
	return (cnt);
}
