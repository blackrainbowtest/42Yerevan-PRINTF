#include "ft_printf.h"

int ft_write_padding(int padding, char c, int diff)
{
	int	count;

	count = 0;
	while (padding-- > 0)
		count += write(1, &c, 1);
	if (diff)
		count += write(1, "-", 1);
	return (count);
}

void	ft_reverse(char *str, int len)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
		start++;
		end--;
	}
}

int	ft_write_dig(long n, int base, int capital, t_keys *keys)
{
	int		count;
	char	num[20];
	int		len;
	int		padding;
	int		zero_fill;
	int		use_zero_padding;

	count = 0;
	len = 0;
	if (n == 0)
		num[len++] = '0';
	else
	{
		if (n < 0)
		{
			keys->is_negative = 1;
			n = -n;
		}
		while (n)
		{
			num[len++] = keys->symbols[n % base];
			n /= base;
		}
	}
	num[len] = '\0';
	use_zero_padding = keys->zero_padding && keys->precision < 0 && !keys->left_align;
	zero_fill = 0;
	if (keys->precision > len)
		zero_fill = keys->precision - len;
	else if (use_zero_padding && keys->width > len + keys->is_negative)
		zero_fill = keys->width - (len + keys->is_negative);
	padding = 0;
	if (keys->width > len + zero_fill + keys->is_negative)
		padding = keys->width - (len + zero_fill + keys->is_negative);
	if (!keys->left_align)
		count += ft_write_padding(padding, ' ', 0);
	if (keys->is_negative)
		count += write(1, "-", 1);
	count += ft_write_padding(zero_fill, '0', 0);
	ft_reverse(num, len);
	count += write(1, num, len);
	if (keys->left_align)
		count += ft_write_padding(padding, ' ', 0);
	return (count);
}