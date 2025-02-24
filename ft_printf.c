/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:36:42 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/23 16:37:18 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char specifier, va_list ap)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += ft_write_chr(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_write_str(va_arg(ap, char *));
	else if (specifier == 'd')
		count += ft_write_dig((long)va_arg(ap, int), 10, 0);
	else if (specifier == 'x')
		count += ft_write_dig((long)va_arg(ap, unsigned int), 16, 0);
	else if (specifier == 'X')
		count += ft_write_dig((long)va_arg(ap, unsigned int), 16, 1);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char	*format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_handle_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
