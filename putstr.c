#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _putstr - prints string
 * @strptr: pointer to strings to be printed
 *
 * Return: returns the number of printed characters
 */
int _putstr(char *strptr)
{
	unsigned int i, cnt;

	cnt = 0;
	if (strptr == NULL)
		return (0);
	for (i = 0; strptr[i] != '\0'; i++)
	{
		_putchar(strptr[i]);
		cnt++;
	}
	return (cnt);
}
