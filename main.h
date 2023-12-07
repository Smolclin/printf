#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/*#include <limits>*/

int _printf(const char *format, ...);
int put_c(char n);
int puter(char *s);
int print_p(void);
int p_EX(va_list vl);
int p_EX_ex(unsigned int nm);
int prin_b(va_list vl);
int prin_c(va_list vl);
int prin_ex_strn(va_list vl);
int prin_ex_xtr(unsigned long int nm);
int prin_t(va_list args);
int prin_int(va_list arg);
int prt_oct(va_list vl);
int pointer(va_list vl);
int rot_13(va_list args);
int rev_str(va_list args);
int p_string(va_list vl);
int f_strln(char *s);

#endif
