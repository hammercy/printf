#include <stdlib.h>
#include "main.h"
/**
 * dectoprntdgt - converted uint to ascii code for each decimal place
 * @uinum: unsigned int number to be converted to ascii code
 *
 * Return: returns array ascii for each decimal places of the uinum.
 */

char *dectoprntdgt(uint uinum)
{
	char *ptr;
	uint b, c, cntdgt;
	uint i, j;
	uint maxdgt = 10;
	uint mult = 1000000000;

	cntdgt = maxdgt;
	b = uinum;
	for (i = 0; i < maxdgt; i++)
	{
		if ((b / mult) != 0)
			break;
		cntdgt = cntdgt - 1;
		b = b % mult;
		mult = mult / 10;
	}
	ptr = malloc((cntdgt + 1) * sizeof(*ptr));

	j = 0;
	for (i = cntdgt; i > 0; i--)
	{
		c = uinum / mult;
		ptr[j] = 48 + c;
		uinum = uinum % mult;
		mult = mult / 10;
		j++;
	}
	ptr[j + 1] = '\0';
	return (ptr);
}
