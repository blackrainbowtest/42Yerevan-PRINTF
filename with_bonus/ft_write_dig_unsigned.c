#include "ft_printf.h"

int	ft_write_dig_unsigned(unsigned long n, int base, int capital, t_keys *keys)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (capital)
		symbols = "0123456789ABCDEF";
	if (n < (unsigned)base)
		return (ft_write_chr(symbols[n], keys));
	count = ft_write_dig_unsigned(n / (unsigned)base, base, capital, keys);
	return (count + ft_write_dig_unsigned(n % (unsigned)base, base, capital, keys));
}