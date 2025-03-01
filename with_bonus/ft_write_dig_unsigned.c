/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_dig_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:11:00 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:12:33 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_num_len(unsigned long n, int base)
{
	int	len;

	len = 1;
	while (n >= (unsigned)base)
	{
		n = n / base;
		len++;
	}
	return (len);
}

int	ft_write_dig_uns(unsigned long n, int base, int capital, t_keys *keys)
{
	int		len;
	char	buff[32];
	char	*symbols;

	symbols = "0123456789abcdef";
	if (capital)
		symbols = "0123456789ABCDEF";
	len = ft_get_num_len(n, base);
	buff[len] = '\0';
	while (len--)
	{
		buff[len] = symbols[n % base];
		n = n / base;
	}
	return (ft_write_str(buff, keys));
}
