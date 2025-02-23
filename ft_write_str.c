#include "libftprintf.h"

int	ft_write_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += ft_write_chr((int)*str);
		++str;
	}
	return (count);
}