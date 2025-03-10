/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:42:58 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:17:02 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include "utils/utils.h"

typedef struct s_keys
{
	int		left_align;
	int		zero_padding;
	int		precision;
	int		width;
	int		is_negative;
	int		hash;
	int		plus;
	int		space;
	char	*symbols;
}			t_keys;

int			ft_printf(const char *format, ...);
int			ft_putchar(int c, t_keys *keys);
int			ft_putstr(char *str, t_keys *keys);
int			ft_putnbr(int n, t_keys *keys, int base, int sign);
int			ft_puthex(unsigned int n, int is_upper, t_keys *keys, int base);
int			ft_putptr(void *ptr, t_keys *keys, int base);

int			ft_write_dig(unsigned long n, int base, t_keys *keys);
int			ft_write_padding(int padding, char c, int diff);
const char	*ft_format_parse(const char *format, t_keys *keys);
int			ft_write_hex(char *str, t_keys *keys);
char		*ft_int_to_hex_str(unsigned long n, int base, \
			int is_upper, t_keys *keys);

# if defined(__linux__)
#  define DEFAULTNULL "(nil)"
# elif defined(__APPLE__)
#  define DEFAULTNULL "0x0"
# endif

# define STRINGNULL "(null)"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

#endif