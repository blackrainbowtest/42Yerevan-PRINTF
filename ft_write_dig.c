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

int	ft_write_dig(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_write_dig(-n, base) + 1);
	}
	else if (n < base)
		return (ft_write_chr(symbols[n]));
	else
	{
		count = ft_write_dig(n / base, base);
		return (count + ft_write_dig(n % base, base));
	}
}
