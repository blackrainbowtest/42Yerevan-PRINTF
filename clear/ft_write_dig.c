/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_dig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:52:20 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/02 13:52:22 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_padding(int padding, char c, int diff)
{
	int	count;

	count = 0;
	while (padding-- > 0)
		count += write(1, &c, 1);
	if (diff)
		count += write(1, "-", 1);
	return (count);
}

static int	ft_zero_fill(t_keys *keys, int len)
{
	int		use_zero_padding;
	int		zero_fill;

	use_zero_padding = keys->zero_padding && (keys->precision < 0) \
						&& !keys->left_align;
	zero_fill = 0;
	if (keys->precision > len)
		zero_fill = keys->precision - len;
	else if (use_zero_padding && keys->width > len + keys->is_negative)
		zero_fill = keys->width - (len + keys->is_negative);
	return (zero_fill);
}

static int	ft_get_revers_num(t_keys *keys, char *num, \
unsigned long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		num[len++] = '0';
	else
	{
		while (n)
		{
			num[len++] = keys->symbols[n % (unsigned)base];
			n /= (unsigned)base;
		}
	}
	num[len] = '\0';
	return (len);
}

static int	ft_write_data(char *num, int len, int zero_fill)
{
	int		count;

	count = 0;
	count += ft_write_padding(zero_fill, '0', 0);
	num = ft_reverse_str(num, len);
	count += write(1, num, len);
	return (count);
}

int	ft_write_dig(unsigned long n, int base, t_keys *keys)
{
	int		count;
	char	*num;
	int		len;
	int		padding;
	int		zero_fill;

	count = 0;
	num = (char *)malloc(sizeof(char) * 100);
	if (!num)
		return (0);
	len = ft_get_revers_num(keys, num, n, base);
	zero_fill = ft_zero_fill(keys, len);
	padding = 0;
	if (keys->width > len + zero_fill + keys->is_negative)
		padding = keys->width - (len + zero_fill + keys->is_negative);
	if (!keys->left_align)
		count += ft_write_padding(padding, ' ', 0);
	if (keys->is_negative)
		count += write(1, "-", 1);
	if (keys->space && !keys->is_negative)
		count += write(1, " ", 1);
	count += ft_write_data(num, len, zero_fill);
	if (keys->left_align)
		count += ft_write_padding(padding, ' ', 0);
	free(num);
	return (count);
}
