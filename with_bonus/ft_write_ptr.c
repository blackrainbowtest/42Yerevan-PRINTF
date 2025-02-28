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
		count = ft_write_str(DEFAULTNULL, keys);
		return (count);
	}
	count = write(1, "0x", 2);
	count += ft_write_dig_unsigned((unsigned long)ptr, 16, 0);
	return (count);
}
