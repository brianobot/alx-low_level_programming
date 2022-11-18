#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char *const format, ...);

/**
 * print_char - Print a char
 * @arg: a list of arguments pointing to char
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - print a int
 * @arg: a list of arguments pointing to ints
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);

}

/**
 * print_float - prints a float
 * @arg: a list of arguments poiting to float
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints astring
 * @arg: a list of arguments poiting to string
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anythinh
 * @format: a string of char
 * @...: a variable number of argument to be printed
 *
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *seperator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", seperator);
			funcs[j].print(args);
			seperator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
