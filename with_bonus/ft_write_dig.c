/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_dig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:37:51 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/23 16:38:25 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_num(char *num, long *n, int base, char *symbols)
{
	int	len;
	int	count;

	len = 0;
	count = 0;
	if (*n == 0)
		num[len++] = '0';
	else
	{
		if (*n < 0)
		{
			count += write(1, "-", 1);
			*n = -(*n);
		}
		while (*n)
		{
			num[len++] = symbols[*n % base];
			*n /= base;
		}
	}
	num[len] = '\0';
	return (count);
}

static int	ft_write_padding(int padding, char c)
{
	int	count;

	count = 0;
	while (padding-- > 0)
		count += write(1, &c, 1);
	return (count);
}

static int	ft_write_left(t_keys *keys, int padding)
{
	int	count;

	count = 0;
	if (!keys->minus_left)
	{
		if (keys->zero_space)
			count += ft_write_padding(padding, '0');
		else
			count += ft_write_padding(padding, ' ');
	}
	return (count);
}

int	ft_write_dig(long n, int base, int cap, t_keys *keys)
{
	int		count;
	char	*symbols;
	char	num[20];
	int		len;
	int		padding;

	symbols = "0123456789abcdef";
	if (cap)
		symbols = "0123456789ABCDEF";
	count = 0;
	count += ft_fill_num(num, &n, base, symbols);
	len = ft_strlen(num);
	padding = 0;
	if (keys->width > len)
		padding = keys->width - len;
	count += ft_write_left(keys, padding);
	while (len)
		count += write(1, &num[--len], 1);
	if (keys->minus_left)
		count += ft_write_padding(padding, ' ');
	return (count);
}

int	ft_write_dig_unsigned(unsigned long n, int base, int capital)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (capital)
		symbols = "0123456789ABCDEF";
	if (n < (unsigned)base)
		return (ft_write_chr(symbols[n]));
	count = ft_write_dig_unsigned(n / (unsigned)base, base, capital);
	return (count + ft_write_dig_unsigned(n % (unsigned)base, base, capital));
}
