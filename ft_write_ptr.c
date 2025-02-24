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

int	ft_write_ptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_write_dig_unsigned((unsigned long)ptr, 16, 1);
	return (count);
}
