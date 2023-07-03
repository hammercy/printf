#ifndef MAIN_H
#define MAIN_H

typedef unsigned int uint;
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

#endif
