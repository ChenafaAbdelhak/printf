#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;

	n = _printf("hello its %s starts with %c","abdelhak",'A',"kdkd");
	printf("*** %d ***", n);
	_printf("\n");

	n = printf("hello its %s starts with %c","abdelhak",'A');
	printf("*** %d ***", n);
	printf("\n");

	return (0);
}
