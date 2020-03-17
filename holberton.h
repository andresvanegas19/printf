#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct formats - Struct
 * @arg: Char pointer
 * @f: The function associated
 */

typedef struct formats
{
	char arg;
<<<<<<< HEAD
	int (*f)(va_list, char *, int *, int *);
} cases;

int _printf(const char *format, ...);
int print_char(va_list argum, char *buffer, int *pos, int *len);
int print_str(va_list argum, char *buffer, int *pos, int *len);
int pc(va_list argum, char *buffer, int *pos, int *len);
int it(va_list argum, char *buffer, int *pos, int *len);
int _abs(int n);
void reverse(char *buffer, int *pos, int count);
int (*select_function(char c))(va_list, char *, int *, int *);
=======
	int (*f)(va_list, char *, int *);
} cases;

int _printf(const char *format, ...);
int print_char(va_list argum, char *buffer, int *pos);
int print_str(va_list argum, char *buffer, int *pos);
int print_pct(va_list argum, char *buffer, int *pos);
int itoaa(va_list argum, char *buffer, int *pos);
int _abs(int n);
void reverse(char *buffer, int *pos, int count, int negative);
int (*select_function(char c))(va_list, char *, int *);
>>>>>>> developer

#endif
