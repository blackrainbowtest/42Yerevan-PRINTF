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

int	ft_write_dig(long n, int base, int capital)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (capital)
		symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_write_dig(-n, base, capital) + 1);
	}
	else if (n < (long)base)
		return (ft_write_chr(symbols[n]));
	else
	{
		count = ft_write_dig(n / base, base, capital);
		return (count + ft_write_dig(n % base, base, capital));
	}
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
	else
	{
		count = ft_write_dig_unsigned(n / (unsigned)base, base, capital);
		return (count + ft_write_dig_unsigned(n % (unsigned)base, base, capital));
	}
}
