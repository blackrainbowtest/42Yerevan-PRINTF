/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:42:58 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/27 19:44:43 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_keys
{
	int	minus_left;
	int	zero_space;
	int	dot_precision;
	int	width;
}			t_keysl;

int	ft_write_str(char *str);
int	ft_write_dig(long n, int base, int capital);
int	ft_write_dig_unsigned(unsigned long n, int base, int capital);
int	ft_write_chr(int c);
int	ft_printf(const char	*format, ...);
int	ft_handle_format(char specifier, va_list ap);
int	ft_write_ptr(void *ptr);

# if defined(__linux__)
#  define DEFAULTNULL "(nil)"
# elif defined(__APPLE__)
#  define DEFAULTNULL "0x0"
# endif

#endif
