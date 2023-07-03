#ifndef MAIN_H
#define MAIN_H

#define UNSED(x) (void)(x)
typedef unsigned int uint;
/**
 * struct formatdata - structure for data string to be foramted and its flags
 * @ptrdata : pointer to the actual datatype
 * @fwidth: the field width of the number to be printed
 * @precision: the number of digits after decimal point
 * @convspecfir: conversion specifiers holder suchas d- decimal i- integer f&d-floatingpoint
 * @flagfwp: indicates whether the value in fwidth and precision is position or actual value: 
 *           z-for actual value $ for positional value
 * @flags: holds the flags for the data in which way to be formated.
 * @lengmodfr: holdels the length modifier for the conversion specifiers.
 * @strdata: holds the formated string data.
 *
 * Descritption: in flags position 
 *               0-#(converstionflag) 1-sign flag(+) 2-invisible plus sign(' ')
 *               3-paddingflag(' ' for space, 0 for zero padding) 4-alignment flag (-)
 *              : fieldwidth always precedes precision.
 *
 */
struct formatdata
{
	void *ptrdata;
	int fwidth = 0;
	int precision = 0;
	char convspecfr = z;
	char flagfwp = z;
	char flags[8] = {z,z,z,z,z,z,z,z};
	char lengmdfr[3];{'\0', '\0','\0'};
	char *strdata;
}

int _ignorefpfwlm(const char *format, uint index);
int _putbin(uint uinum);
int _putaddrp(void *addr);
int _putoct(uint inum);
int _puthex(uint inum);
int _putuint(uint uinum);
char *convrtbase(uint uinum, char c);
char *dectoprntdgt(uint uinum);
int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putint(int inum);
int _putfloat(float fnum);
int _strlen(char *str);
char * _putstr(void *ptrdata, int fwidth, int precision, char *flags);
char *chartostr(void *ptrdata, int fwidth, int precision, char *flags);
char *inttostr(void *ptrdata, int fwidth, int precision, char *flags);
char *uint2binstr(void *ptrdata, int fwidth, int precision, char *flags);
char *uint2octstr(void *ptrdata, int fwidth, int precision, char *flags);
char *uint2hexstr(void *ptrdata, int fwidth, int precision, char *flags);
char *dftostr(void *ptrdata, int fwidth, int precision, char *flags);
char *detostr(void *ptrdata, int fwidth, int precision, char *flags);
char *dgtostr(void *ptrdata, int fwidth, int precision, char *flags);
char *datostr(void *ptrdata, int fwidth, int precision, char *flags);
char *_putptr(void *ptrdata, int fwidth, int precision, char *flags);
		  
void _getdata(const char *format, struct dataformat **arrdata, va_list arg, char **datatype);
char * (*ptrfun[])(void *ptrdata, int fwidth, int precision, char *flags) = { chartostr,inttostr,inttostr, uint2binstr,uint2octstr,uint2hexstr,uint2hexstr,dftostr, dftostr,detostr,detostr, dgtostr, dgtostr,datostr, datostr,_putstr, _putptr};
char * 


#endif
