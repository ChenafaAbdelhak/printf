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
	int i, count = 0, number;
	va_list ap;
	char c, *str = NULL;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(ap, int);
					_putchar(c);
					count++, i++;
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(null)";
					count += _puts(str), i++;
					break;
				case 'd':
					number = va_arg(ap, int);
					if (!number)
						return (-1);
					count += print_number(number), i++;
					break;
				case '%':
					_putchar('%'), count++, i++;
					break;
				default:
					return (-1);
			}
			continue;
		}
		_putchar(format[i]), count++;
	}
	va_end(ap);
	return (count);
}
/**
 * _puts - prints a string
 * @str: string pointer
 * Return: number of printed characters
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

/**
 *print_number - function.
 *@n: input.
 *Return: nothing.
 */
int print_number(int n)
{
	unsigned int m, d, count, printed = 0;

	if (n < 0)
	{
		_putchar(45);
		printed++;
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
		printed++;
	}
	return (printed);
}
