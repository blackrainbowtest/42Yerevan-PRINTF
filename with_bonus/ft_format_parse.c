/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:17:25 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:17:27 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_number(int c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_atoi(const char **format)
{
	int	count;

	count = 0;
	while (is_number(**format))
	{
		count = (count * 10) + (**format - '0');
		++(*format);
	}
	return (count);
}
/*
	.........↓→→→↓
	abcdefgh%0--0d
	if minus_left is avalable than zero_space ignored!!!
*/

const char	*ft_format_parse(const char *format, t_keys *keys)
{
	keys->minus_left = 0;
	keys->zero_space = 0;
	keys->width = 0;
	keys->dot_precision = -1;
	while (*format == '-' || *format == '0')
	{
		if (*format == '-')
			keys->minus_left = 1;
		if (*format == '0')
			keys->zero_space = 1;
		++format;
	}
	if (is_number(*format))
		keys->width = ft_atoi(&format);
	if (*format == '.')
	{
		++format;
		keys->dot_precision = 0;
		if (is_number(*format))
			keys->dot_precision = ft_atoi(&format);
	}
	if (keys->zero_space && keys->dot_precision >= 0)
		keys->zero_space = 0;
	return (format);
}
