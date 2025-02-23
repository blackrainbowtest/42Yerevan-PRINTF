/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:39:48 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/23 16:40:19 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		count;

	count = ft_printf("%x\n", -1);
	ft_printf("printed chars count: %d\n", count);
	count = printf("%x\n", -1);
	printf("printed chars in real one count: %d\n", count);
	count = ft_printf("%x\n", INT32_MIN);
	ft_printf("printed chars count: %d\n", count);
	count = printf("%x\n", INT32_MIN);
	printf("printed chars in real one count: %d\n", count);
	count = ft_printf("%x\n", INT32_MAX);
	ft_printf("printed chars count: %d\n", count);
	count = printf("%x\n", INT32_MAX);
	printf("printed chars in real one count: %d\n", count);
	count = ft_printf("%x\n", 0);
	ft_printf("printed chars count: %d\n", count);
	count = printf("%x\n", 0);
	printf("printed chars in real one count: %d\n", count);
	return (0);
}
