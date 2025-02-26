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

	// count = ft_printf("%x\n", -1);
	// ft_printf("printed chars count: %d\n", count);
	// count = printf("%x\n", -1);
	// printf("printed chars in real one count: %d\n", count);
	// count = ft_printf("%x\n", INT_MIN);
	// ft_printf("printed chars count: %d\n", count);
	// count = printf("%x\n", INT_MIN);
	// printf("printed chars in real one count: %d\n", count);
	// count = ft_printf("%x\n", INT_MAX);
	// ft_printf("printed chars count: %d\n", count);
	// count = printf("%x\n", INT_MAX);
	// printf("printed chars in real one count: %d\n", count);
	// count = ft_printf("%x\n", 0);
	// ft_printf("printed chars count: %d\n", count);
	// count = printf("%x\n", 0);
	// printf("printed chars in real one count: %d\n", count);

	// count = printf(" NULL %s NULL ", NULL);
	// printf("printed chars in real one count: %d\n", count);

	// count = ft_printf(" NULL %s NULL ", NULL);
	// ft_printf("printed chars in real one count: %d\n", count);


	// count = ft_printf(" %p ", -1);
	// ft_printf("printed address in real one count: %d\n", count);

	count = printf(" %p %p ", 0, 0);
	printf("printed address in real one count: %d\n", count);
	return (0);
}

// cc -Wall -Werror -Wextra main.c libftprintf.a -o my_program

// ./my_program

// make fclean
