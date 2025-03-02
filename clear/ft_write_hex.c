#include "ft_printf.h"

char	*ft_int_to_hex_str(unsigned long n, int base, int is_upper, t_keys *keys)
{
	char	*hex;
	int		len;

	hex = (char *)malloc(sizeof(char) * 100);
	if (!hex)
		return (NULL);
	len = 0;
	if (is_upper)
		keys->symbols = HEX_UPPER;
	else
		keys->symbols = HEX_LOWER;
	while (n)
	{
		hex[len] = keys->symbols[n % base];
		n /= base;
		len++;
	}
	hex[len] = '\0';
	hex = ft_reverse_str(hex, len);
	return (hex);
}

int	ft_write_hex(char *str, t_keys *keys)
{
	int	count;
	int	len;

	count = 0;
	if (!str)
		str = STRINGNULL;
	len = ft_strlen(str);
	if (keys->precision >= 0 && keys->precision < len)
		len = keys->precision;
	if (keys->left_align)
		count += write(1, str, len);
	if (keys->precision > len)
	{
		while (keys->precision > len)
		{
			count += write(1, "0", 1);
			keys->precision--;
		}
	}
	if (!keys->left_align)
		count += write(1, str, len);
	return (count);
}