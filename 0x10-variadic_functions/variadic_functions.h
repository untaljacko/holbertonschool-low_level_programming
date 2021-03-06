#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct select - structure for store the option functions
 * @select: input data
 * @ptr: pointer to the function option
 */
typedef struct select
{
	char *select;
	void (*ptr)();
} formats;
#endif
