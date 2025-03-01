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

int	ft_write_dig_uns(unsigned long n, int base, int capital, t_keys *keys)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (capital)
		symbols = "0123456789ABCDEF";
	if (n < (unsigned)base)
		return (ft_write_chr(symbols[n], keys));
	count = ft_write_dig_uns(n / (unsigned)base, base, capital, keys);
	return (count + ft_write_dig_uns(n % \
			(unsigned)base, base, capital, keys));
}
