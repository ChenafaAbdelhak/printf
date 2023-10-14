#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - a custom printf
 * @format: format string
 * Return: number of caracters printed
 */

int _printf(const char *format, ...)
{
	int i, c, printed_var = 0, n = 0;
	va_list ap;
	char *str = NULL;

	va_start(ap, format);

	if (format == NULL)
		return (0);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(ap, int);
					_putchar(c);
					printed_var++;
					n += 2;
					i++;
					break;
				case 's':
					str = va_arg(ap, char *);
					printed_var += _puts(str);
					n += 2;
					i++;
					break;
				default:
					_putchar(format[i]);
			}
			continue;
		}
		_putchar(format[i]);

	}
	va_end(ap);
	return (i + printed_var - n);
}
/**
 * _puts - prints a string
 * @str: string pointer
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
