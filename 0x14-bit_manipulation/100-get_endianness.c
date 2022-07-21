#include "main.h"

int get_endianness(void)
{
	char num;
	char *ptr;

	num = '1';
	ptr = &num;
	if (*ptr == 0)
		return (0);
	else
		return (1);
}
