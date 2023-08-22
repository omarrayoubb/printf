#include "main.h"
int main(void)
{
	int x = _printf("% ");
	int c = _printf("%\0");
	printf("%d", x);
	printf("%d", c);
return (0);
}
