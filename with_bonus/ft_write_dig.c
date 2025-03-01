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
#include "ft_colors.h"
#include "utils/libft.h"

static void	ft_is_negative(long *n, int *is_negative)
{
	if (*n < 0)
	{
		*is_negative = 1;
		*n = -(*n);
	}
}
static int	ft_fill_num(char *num, long *n, int base, char *symbols)
{
	int	len;
	int	count;
	int	is_negative;

	len = 0;
	count = 0;
	is_negative = 0;
	if (*n == 0)
		num[len++] = '0';
	else
	{
		ft_is_negative(n, &is_negative);
		while (*n)
		{
			num[len++] = symbols[*n % base];
			*n /= base;
		}
	}
	if (is_negative == 1)
		num[len++] = '-';
	num[len] = '\0';
	return (count);
}

static int	ft_write_left(t_keys *keys, int padding, int len)
{
	int	count;
	int diff;

	count = 0;
	diff = 0;
	if (keys->dot_precision > len)
		diff = keys->dot_precision - len;
	if (!keys->minus_left)
	{
		if (keys->zero_space)
			count += ft_write_padding(padding, '0', diff);
		else
			count += ft_write_padding(padding, ' ', diff);
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
	count += ft_write_left(keys, padding, len);
	while (len)
		count += write(1, &num[--len], 1);
	if (keys->minus_left)
		count += ft_write_padding(padding, ' ', 0);
	return (count);
}
