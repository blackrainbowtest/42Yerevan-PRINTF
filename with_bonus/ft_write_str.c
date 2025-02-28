/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:38:58 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/23 16:39:00 by aramarak         ###   ########.fr       */
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
	len = ft_strnlen(str, (keys->dot_precision >= 0) ? keys->dot_precision : INT_MAX);
	padding = (keys->width > len) ? keys->width - len : 0;
	count = 0;
	if (!keys->minus_left)
		count += ft_write_padding(padding, ' ');
	count += write(1, str, len);
	if (keys->minus_left)
		count += ft_write_padding(padding, ' ');
	return (count);
}
