#include "ft_printf.h"

int ft_putchar(int c, t_keys *keys)
{
	int	count;

	count = 0;
	if (keys->left_align)
		count += write(1, &c, 1);
	while (keys->width > 1)
	{
		count += write(1, " ", 1);
		keys->width--;
	}
	if (!keys->left_align)
		count += write(1, &c, 1);
	return (count);
}

int	ft_putstr(char *str, t_keys *keys)
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
	while (keys->width > len)
	{
		count += write(1, " ", 1);
		keys->width--;
	}
	if (!keys->left_align)
		count += write(1, str, len);
	return (count);
}

int	ft_putnbr(int n, t_keys *keys, int base)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		num *= -1;
		keys->is_negative = 1;
	}
	if (keys->precision == 0 && num == 0)
	{
		while (keys->width-- > 0)
			count += write(1, " ", 1);
		return (count);
	}
	count += ft_write_dig(num, base, 0, keys);
	return (count);
}

int	ft_puthex(unsigned int n, int is_upper, t_keys *keys, int base)
{
	int		count;
	char	*hex;

	count = 0;
	// if (keys->precision == 0 && n == 0)
	// {
	// 	while (keys->width-- > 0)
	// 		count += write(1, " ", 1);
	// 	return (count);
	// }
	// hex = ft_itoa_base(n, 16, is_upper);
	// count += ft_putstr(hex, keys);
	// free(hex);
	return (count);
}

int	ft_putptr(void *ptr, t_keys *keys, int base)
{
	int		count;
	char	*hex;

	count = 0;
	if (keys->precision == 0 && ptr == NULL)
	{
	// 	while (keys->width-- > 0)
	// 		count += write(1, " ", 1);
	// 	return (count);
	}
	// hex = ft_itoa_base((unsigned long)ptr, 16, 0);
	// count += write(1, "0x", 2);
	// count += ft_putstr(hex, keys);
	// free(hex);
	return (count);
}