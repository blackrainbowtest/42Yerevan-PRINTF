/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:47:53 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/02 13:47:56 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_format(const char *format, va_list args, t_keys *keys)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(args, int), keys);
	else if (*format == 's')
		count += ft_putstr(va_arg(args, char *), keys);
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int), keys, 10);
	else if (*format == 'u')
		count += ft_putnbr(va_arg(args, unsigned int), keys, 10);
	else if (*format == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 0, keys, 16);
	else if (*format == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 1, keys, 16);
	else if (*format == 'p')
		count += ft_putptr(va_arg(args, void *), keys, 16);
	else if (*format == '%')
		count += ft_putchar('%', keys);
	return (count);
}

static void	ft_format_init(t_keys *keys)
{
	keys->left_align = 0;
	keys->zero_padding = 0;
	keys->precision = -1;
	keys->width = 0;
	keys->is_negative = 0;
	keys->symbols = HEX_LOWER;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_keys	keys;
	int		pr_count;

	pr_count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			ft_format_init(&keys);
			format++;
			format = ft_format_parse(format, &keys);
			pr_count += ft_select_format(format, args, &keys);
		}
		else
			pr_count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (pr_count);
}
