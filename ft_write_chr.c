#include "libftprintf.h"

int	ft_write_chr(int c)
{
	return (write(1, &c, 1));
}