#include "ft_printf.h"

int	ft_write_padding(int padding, char c)
{
	int	count;

	count = 0;
	while (padding-- > 0)
		count += write(1, &c, 1);
	return (count);
}