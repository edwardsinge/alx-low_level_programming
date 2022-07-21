#include "main.h"

unsigned int str_len(const char *b)
{
	int i, len = 0;

	for (i = 0; b[i]; i++)
	{
		len++;
	}
	len = len - 1;
	return (len);
}

int power(int base, int exponent)
{
	int i, result = 1;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int index, str_index;

	if (b == NULL)
		return (0);
	str_index = str_len(b);
	for (index = str_index; index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		uint += (b[index] - '0') * power(2, str_index - index);
	}

	return (uint);
}
