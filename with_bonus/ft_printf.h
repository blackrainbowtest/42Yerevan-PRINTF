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

// t_flag structure
typedef struct s_flags
{
	int	minus;
	int	zero;
	int dot_precision;
	int hash;
	int space;
	int plus;

	int	width;
	int	star;
}		t_flags;

// ft_utils.c
t_flags	ft_new_flag(void);
t_flags ft_wdt_flag(t_flags);

// ft_printf.c
int	ft_printf(const char *, ...);
int	ft_printf_formats(char, va_list, t_flags);

// Mandatory part
// %c
int	ft_write_chr(int);
// %s
int	ft_write_str(const char *)
// %i - %d

// %u

// %x - %X

// %p

// 

// 

#endif