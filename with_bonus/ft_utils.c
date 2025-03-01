/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:16:07 by aramarak          #+#    #+#             */
/*   Updated: 2025/03/01 14:16:23 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_padding(int padding, char c)
{
	int	count;

	count = 0;
	while (padding-- > 0)
		count += write(1, &c, 1);
	return (count);
}
