#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/**
 * struct function - struct function
 * @function: conversion specifier
 * @f: pointer
 */

typedef struct function
{
	char function;
	void (*f)(va_list ap);
} f_t;

#endif
