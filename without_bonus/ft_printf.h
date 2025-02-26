/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:42:58 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/23 16:43:52 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int	ft_write_str(char *str);
int	ft_write_dig(long n, int base, int capital);
int	ft_write_dig_unsigned(unsigned long n, int base, int capital);
int	ft_write_chr(int c);
int	ft_printf(const char	*format, ...);
int	ft_handle_format(char specifier, va_list ap);
int	ft_write_ptr(void *ptr);

#endif
