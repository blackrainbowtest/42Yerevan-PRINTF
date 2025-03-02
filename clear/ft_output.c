/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:48:07 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/02 13:49:23 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c, t_keys *keys)
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

int	ft_putnbr(int n, t_keys *keys, int base, int sign)
{
	int				count;
	unsigned long	num;

	count = 0;
	num = (unsigned)n;
	if (!sign && n < 0)
		num = (unsigned)(-n);
	if (n < 0 && (num <= INT_MAX || num == 2147483648) && !sign)
		keys->is_negative = 1;
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
	return (count);
}

int	ft_putptr(void *ptr, t_keys *keys, int base)
{
	int		count;
	char	*hex;

	count = 0;
	return (count);
}
