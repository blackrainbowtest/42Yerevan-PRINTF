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
#include "ft_colors.h"

int	ft_write_padding(int padding, char c, int diff)
{
	int	count;
	
	count = 0;
	while ((padding--) - diff > 0)
	{
		if (diff > 0)
			count += write(1, " ", 1);
		else
			count += write(1, &c, 1);
	}
	while (diff-- > 0)
		count += write(1, &c, 1);
	return (count);
}
