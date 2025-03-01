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
#include "ft_colors.h"

int	main(void)
{
	int		count;
/*	hexadecimal format (0x...)
	int a = 42;
	void *ptr = &a;
	void *null_ptr = NULL;

	count = printf(GREEN "|%p|\n" RESET, ptr);
	printf(CYAN "Pointer count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%p|\n" RESET, ptr);
	printf(CYAN "Pointer count is: %d;\n" RESET, count);

	count = printf(GREEN "|%p|\n" RESET, null_ptr);
	printf(CYAN "NULL pointer count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%p|\n" RESET, null_ptr);
	printf(CYAN "NULL pointer count is: %d;\n" RESET, count);
*/
/*
	unsigned int u1 = 42;
	unsigned int u2 = 4294967295; // Max for 32-bit unsigned int

	count = printf(GREEN "|%u|\n" RESET, u1);
	printf(CYAN "Unsigned 42 count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%u|\n" RESET, u1);
	printf(CYAN "Unsigned 42 count is: %d;\n" RESET, count);

	count = printf(GREEN "|%u|\n" RESET, u2);
	printf(CYAN "Unsigned max count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%u|\n" RESET, u2);
	printf(CYAN "Unsigned max count is: %d;\n" RESET, count);
*/
/*
	int hex1 = 42;
	int hex2 = 255;
	int hex3 = 4096;

	count = printf(GREEN "|%x|\n" RESET, hex1);
	printf(CYAN "Hex 42 count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%x|\n" RESET, hex1);
	printf(CYAN "Hex 42 count is: %d;\n" RESET, count);

	count = printf(GREEN "|%X|\n" RESET, hex2);
	printf(CYAN "Hex 255 count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%X|\n" RESET, hex2);
	printf(CYAN "Hex 255 count is: %d;\n" RESET, count);

	count = printf(GREEN "|%x|\n" RESET, hex3);
	printf(CYAN "Hex 4096 count is: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%x|\n" RESET, hex3);
	printf(CYAN "Hex 4096 count is: %d;\n" RESET, count);
*/

/* MINUS FLAG TESTINGS */
/*
	count = printf(GREEN "|%-10d|\n" RESET, 42);
	printf(CYAN "Left-aligned d count: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%-10d|\n" RESET, 42);
	printf(CYAN "Left-aligned d count: %d;\n" RESET, count);

	count = printf(GREEN "|%-10i|\n" RESET, -42);
	printf(CYAN "Left-aligned i count: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%-10i|\n" RESET, -42);
	printf(CYAN "Left-aligned i count: %d;\n" RESET, count);
*/

count = printf(GREEN "|%-10u|\n" RESET, 42);
printf(CYAN "Left-aligned u count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%-10u|\n" RESET, 42);
printf(CYAN "Left-aligned u count: %d;\n" RESET, count);




	return (0);
}

// cc -Wall -Werror -Wextra main.c libftprintf.a -o my_program

// ./my_program

// make fclean
