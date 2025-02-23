/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:39:36 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/23 16:39:37 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_write_str(char *str);
int	ft_write_dig(long n, int base);
int	ft_write_chr(int c);
int	ft_printf(const char	*format, ...);
int	ft_handle_format(char specifier, va_list ap);

#endif
