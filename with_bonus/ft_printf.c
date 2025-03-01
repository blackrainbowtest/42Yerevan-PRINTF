/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:36:42 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:18:22 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(char specifier, va_list ap, t_keys *keys)
{
	int		count;

	count = 0;
	if (specifier == '%')
		count += write(1, "%", 1);
	else if (specifier == 'c')
		count += ft_write_chr(va_arg(ap, int), keys);
	else if (specifier == 's')
		count += ft_write_str(va_arg(ap, char *), keys);
	else if (specifier == 'd')
		count += ft_write_dig((long)va_arg(ap, int), 10, 0, keys);
	else if (specifier == 'i')
		count += ft_write_dig((long)va_arg(ap, int), 10, 0, keys);
	else if (specifier == 'u')
		count += ft_write_dig_uns((long)va_arg(ap, unsigned int), 10, 0, keys);
	else if (specifier == 'x')
		count += ft_write_dig_uns((long)va_arg(ap, unsigned int), 16, 0, keys);
	else if (specifier == 'X')
		count += ft_write_dig_uns((long)va_arg(ap, unsigned int), 16, 1, keys);
	else if (specifier == 'p')
		count += ft_write_ptr(va_arg(ap, void *), keys);
	else
		count += write(1, &specifier, 1);
	return (count);
}

static void	ft_format_init(t_keys *keys)
{
	keys->minus_left = 0;
	keys->zero_space = 0;
	keys->dot_precision = -1;
	keys->width = 0;
}

int	ft_printf(const char	*format, ...)
{
	va_list	ap;
	int		count;
	t_keys	keys;

	if (!format || *format == '\0')
		return (0);
	va_start(ap, format);
	count = 0;
	ft_format_init(&keys);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			format = ft_format_parse(format, &keys);
			count += ft_handle_format(*format, ap, &keys);
		}
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
