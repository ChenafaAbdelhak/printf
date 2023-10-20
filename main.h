#ifndef pr
#define pr

#include <stdio.h>
#define UNUSED(expr) do { (void)(expr); } while (0)

int _printf(const char *format, ...);
void _putchar(char c);
int _puts(char *str);
int print_number(int n);

#endif
