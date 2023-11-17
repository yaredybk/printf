#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct formatter - pair a format type and a function handler
 * @id: conversion specifiers charahcter
 * @f: pointer to a fanction that handles printing specific data type
 */
typedef struct formatter
{
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);


#endif



