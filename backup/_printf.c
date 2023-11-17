#include "main.h"

/**
 * _printf - prints to stdout based on an input format
 * @format: formatted input string to indicate types of args
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list  args;
	int a = 0, len = 0,j;
	convert_match handlers[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (handlers[j].id[0] == format[a] && handlers[j].id[1] == format[a + 1])
			{
				len += handlers[j].f(args);
				a += 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[a]);
		len++;
		a++;
	}
	va_end(args);
	return (len);

}
