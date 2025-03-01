/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:38:58 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:15:23 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strnlen(char *str, int max)
{
	int	len;

	len = 0;
	while (str[len] && len < max)
		len++;
	return (len);
}

int	ft_write_str(char *str, t_keys *keys)
{
	int	count;
	int	len;
	int	padding;

	if (!str)
		str = "(null)";
	if (keys->dot_precision >= 0)
		len = ft_strnlen(str, keys->dot_precision);
	else
		len = ft_strnlen(str, INT_MAX);
	if (keys->width > len)
		padding = keys->width - len;
	else
		padding = 0;
	count = 0;
	if (!keys->minus_left)
		count += ft_write_padding(padding, ' ', 0);
	count += write(1, str, len);
	if (keys->minus_left)
		count += ft_write_padding(padding, ' ', 0);
	return (count);
}
