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
	/*
	// testing . usually it used for minlength for text
	printf("TESTING - '.' with '%%s' ;\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	count = printf("|%.5s|\n", "Hello, world!");  // print first 5 symbols
	printf("count is: %d;\n", count);
	count = printf("|%.10s|\n", "Hi");			// Hi shorter than 10, thats why we can see all text
	printf("count is: %d;\n", count);
	count = printf("|%.0s|\n", "Hello");		// print 0 symbols — symbol does not be printed
	printf("count is: %d;\n", count);
	printf("\nmy_programm:\n");
	count = ft_printf("|%.5s|\n", "Hello, world!");// print first 5 symbols
	printf("count is: %d;\n", count);
	count = ft_printf("|%.10s|\n", "Hi");			// Hi shorter than 10, thats why we can see all text
	printf("count is: %d;\n", count);
	count = ft_printf("|%.0s|\n", "Hello");		// print 0 symbols — symbol does not be printed
	printf("count is: %d;\n", count);
	printf("TESTING - '0' with '%%s' ;\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	// gives Werror format error, 0 not used with strings
	// printf("|%010s|\n", "Test");
    // printf("|%05s|\n", "Hi");
	printf("TESTING - '-' with '%%s' ;\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	count = printf("|%-10s|\n", "Test");
	printf("count is: %d;\n", count);
    count = printf("|%-5s|\n", "Hi");
	printf("count is: %d;\n", count);
	printf("\nmy_programm:\n");
	count = ft_printf("|%-10s|\n", "Test");
	printf("count is: %d;\n", count);
    count = ft_printf("|%-5s|\n", "Hi");
	printf("count is: %d;\n", count);
	*/

	printf("TESTING %%d and %%i ;\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    // base input
    count = printf("|%d|\n", 42);
    printf("42 count is: %d;\n", count);
    count = ft_printf("|%d|\n", 42);
    printf("42 count is: %d;\n", count);

    count = printf("|%i|\n", -42);
    printf("-42 count is: %d;\n", count);
	count = ft_printf("|%i|\n", -42);
    printf("-42 count is: %d;\n", count);

    // Ширина
    count = printf("|%10d|\n", 42);
    printf("d width count is: %d;\n", count);
	count = ft_printf("|%10d|\n", 42);
    printf("d width count is: %d;\n", count);

    count = printf("|%10i|\n", -42);
    printf("i width count is: %d;\n", count);
    count = ft_printf("|%10i|\n", -42);
    printf("i width count is: %d;\n", count);

    // Выравнивание влево
    count = printf("|%-10d|\n", 42);
    printf("count is: %d;\n", count);
    count = ft_printf("|%-10d|\n", 42);
    printf("count is: %d;\n", count);
    count = printf("|%-10i|\n", -42);
    printf("count is: %d;\n", count);
    count = ft_printf("|%-10i|\n", -42);
    printf("count is: %d;\n", count);

	return (0);
}

// cc -Wall -Werror -Wextra main.c libftprintf.a -o my_program

// ./my_program

// make fclean
