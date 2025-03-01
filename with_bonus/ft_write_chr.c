/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:36:22 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:15:35 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_chr(int c, t_keys *keys)
{
	int	count;
	int	padding;

	padding = keys->width - 1;
	count = 0;
	if (!keys->minus_left)
		count += ft_write_padding(padding, ' ', 0);
	count += write(1, &c, 1);
	if (keys->minus_left)
		count += ft_write_padding(padding, ' ', 0);
	return (count);
}
