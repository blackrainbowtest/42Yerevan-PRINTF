/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:59:00 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/24 20:01:47 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_ptr(void *ptr, t_keys *keys)
{
	int	count;

	if (!ptr)
	{
		if (keys->dot_precision == 0)
			return (ft_write_str("", keys));
		return (ft_write_str(DEFAULTNULL, keys));
	}
	count = write(1, "0x", 2);
	if (keys->width >= 2)
		keys->width -= 2;
	count += ft_write_dig_uns((unsigned long)ptr, 16, 0, keys);
	return (count);
}
