#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * int _printf - produce output according to a format.
 * @format: pointer to string to be printed
 * @...: variable arguments to be printed.
 *
 * Return: the number of character to be printed.
 */
int  _printf(const char *format, ...)
{
	unsigned  int i = 0, cnt = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i = i + 1;
			i = _ignorefpfwlm(format, i);
			if (format[i] == 'c')
				cnt += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				cnt += _putstr(va_arg(args, char *));
			else if (format[i] == 'b')
				cnt += _putbin(va_arg(args, uint));
			else if (format[i] == 'd' || format[i] == 'i')
				cnt += _putint(va_arg(args, int));
			else if (format[i] == 'p')
				cnt += _putaddrp(va_arg(args, char *));
			else if (format[i] == 'o')
				 cnt += _putoct(va_arg(args, uint));
			else if (format[i] == 'u')
				cnt += _putuint(va_arg(args, uint));
			else if (format[i] == 'x' || format[i] == 'X')
				cnt += _puthex(va_arg(args, uint));
			else if (format[i] == '%')
				cnt += _putchar('%');
			else
				cnt += _putchar(format[--i]);
			i++;
		}
		cnt += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (cnt);
}


/**
 * _putfloat - prints a float and double
 * @fnum: a floating to be printed
 *
 * Return: the num float character printed
 */

int _putfloat(float fnum)
{
	unsigned int cnt;

	cnt = (int)fnum;
	return (cnt);
}

/**
 * _ignorefpfwlm  - ignore the flags,fieldwidth,precision and length modifiers
 * @format: the string pointer containing the characters,specifiers, floags ets
 * @index: the current position of the pointer in the format string pointer

 * Return: index position in format pointer after execution.
 */
int _ignorefpfwlm(const char *format, uint index)
{
	char fpfwlm[] = "#0- +.*123456789hlLjqtzZ";
	uint i;

	i = 0;
	while(fpfwlm[i] != '\0')
	{
		if (format[index] == fpfwlm[i])
		{
			i = 0;
			index++;
		}
		i++;
	}
	return (index);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
