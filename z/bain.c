#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n = 0;

	n = _printf("its %s startig with %c %d\n","abdelhak",'A', 333);
	printf("n = %d\n", n);

	n = printf("its %s startig with %c %d\n","abdelhak",'A', 333);
	printf("n = %d\n", n);
	return (0);
}
