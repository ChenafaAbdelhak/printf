#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;
	char *s = NULL;

	n = _printf("hello its %s starts %%with %c %s","abdelhak",'A',s);
	printf("*** %d ***", n);
	_printf("\n");
	_printf("Unknown:[%r]\n");

	n = printf("hello its %s starts %%with %c %s","abdelhak",'A',s);
	printf("*** %d ***", n);
	printf("\n");

	return (0);
}
