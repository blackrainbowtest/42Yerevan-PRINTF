/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_dig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:37:51 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 16:52:21 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_colors.h"
#include "utils/libft.h"

static void	ft_is_negative(long *n, t_keys *keys)
{
	if (*n < 0)
	{
		keys->is_negative = 1;
		*n = -(*n);
	}
}

static int	ft_fill_num(char *num, long *n, int base, t_keys *keys)
{
	int	len;
	int	count;

	len = 0;
	count = 0;
	if (*n == 0)
		num[len++] = '0';
	else
	{
		ft_is_negative(n, keys);
		while (*n)
		{
			num[len++] = keys->symbols[*n % (long)base];
			*n /= (long)base;
		}
	}
	num[len] = '\0';
	return (count);
}

static int	ft_write_left(t_keys *keys, int padding, int len)
{
	int	count;
	int	diff;

	count = 0;
	diff = 0;
	if (keys->dot_precision > len)
		diff = keys->dot_precision - len;
	if (keys->is_negative)
		count += write(1, "-", 1);
	if (!keys->minus_left)
	{
		if (keys->zero_space || keys->dot_precision >= 0)
			count += ft_write_padding(padding, '0', diff);
		else
			count += ft_write_padding(padding, ' ', diff);
	}
	return (count);
}

int	ft_write_dig(long n, int base, int cap, t_keys *keys)
{
	int		count;
	char	num[20];
	int		len;
	int		padding;

	if (cap)
		keys->symbols = "0123456789ABCDEF";
	count = 0;
	count += ft_fill_num(num, &n, base, keys);
	len = ft_strlen(num);
	if (n == 0 && keys->dot_precision == 0 && !keys->is_negative)
		len = 0;
	padding = 0;
	if (keys->width > len)
		padding = keys->width - len;
	count += ft_write_left(keys, padding, len);
	while (len)
		count += write(1, &num[--len], 1);
	if (keys->is_negative)
		--padding;
	if (keys->minus_left)
		count += ft_write_padding(padding, ' ', 0);
	return (count);
}
