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

/* with %d and %i */
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
/* with %u (Unsigned) */
/*
	count = printf(GREEN "|%-10u|\n" RESET, 42);
	printf(CYAN "Left-aligned u count: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%-10u|\n" RESET, 42);
	printf(CYAN "Left-aligned u count: %d;\n" RESET, count);
*/
/* with %x and %X */
/*
	count = printf(GREEN "|%-10x|\n" RESET, 255);
	printf(CYAN "Left-aligned x count: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%-10x|\n" RESET, 255);
	printf(CYAN "Left-aligned x count: %d;\n" RESET, count);

	count = printf(GREEN "|%-10X|\n" RESET, 255);
	printf(CYAN "Left-aligned X count: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%-10X|\n" RESET, 255);
	printf(CYAN "Left-aligned X count: %d;\n" RESET, count);
*/
/* with %p (Pointers) */
/*
	void *ptr = (void *)0x1234;
	count = printf(GREEN "|%-20p|\n" RESET, ptr);
	printf(CYAN "Left-aligned p count: %d;\n" RESET, count);
	count = ft_printf(GREEN "|%-20p|\n" RESET, ptr);
	printf(CYAN "Left-aligned p count: %d;\n" RESET, count);
*/

/* 0 FLAG TESTINGS d, i, u, x, X) */

/* with %d (Signed Integer) */
/*
    int num = 42;
	count = printf(GREEN "|%08d|\n" RESET, num);
    printf(CYAN "Zero-padded d count: %d;\n" RESET, count);
    count = ft_printf(GREEN "|%08d|\n" RESET, num);
    printf(CYAN "Zero-padded d count: %d;\n" RESET, count);

    count = printf(GREEN "|%08.3d|\n" RESET, num);
    printf(CYAN "Zero-padded d with precision count: %d;\n" RESET, count);
    count = ft_printf(GREEN "|%08.3d|\n" RESET, num);
    printf(CYAN "Zero-padded d with precision count: %d;\n" RESET, count);
*/
/* with %i (Signed Integer) */
/*
    int num = -42;
    count = printf(GREEN "|%08i|\n" RESET, num);
    printf(CYAN "Zero-padded i count: %d;\n" RESET, count);
    count = ft_printf(GREEN "|%08i|\n" RESET, num);
    printf(CYAN "Zero-padded i count: %d;\n" RESET, count);
*/
/* with %u (Unsigned Integer) */
/*
    unsigned int unum = 42;
    count = printf(GREEN "|%08u|\n" RESET, unum);
    printf(CYAN "Zero-padded u count: %d;\n" RESET, count);
    count = ft_printf(GREEN "|%08u|\n" RESET, unum);
    printf(CYAN "Zero-padded u count: %d;\n" RESET, count);
*/
/* with %x (Lowercase Hexadecimal) */
/*
    unsigned int hexnum = 0x2a;
    count = printf(GREEN "|%08x|\n" RESET, hexnum);
    printf(CYAN "Zero-padded x count: %d;\n" RESET, count);
    count = ft_printf(GREEN "|%08x|\n" RESET, hexnum);
    printf(CYAN "Zero-padded x count: %d;\n" RESET, count);
*/
/* with %X (Uppercase Hexadecimal) */
/*
    unsigned int hexnum = 0x2a;
	count = printf(GREEN "|%08X|\n" RESET, hexnum);
    printf(CYAN "Zero-padded X count: %d;\n" RESET, count);
    count = ft_printf(GREEN "|%08X|\n" RESET, hexnum);
    printf(CYAN "Zero-padded X count: %d;\n" RESET, count);
*/

/* DOT PRECISION TESTS (d, i, u, x, X) */

/* with %d (Signed Integer) */
/*
int num = 42;
count = printf(GREEN "|%.5d|\n" RESET, num);
printf(CYAN "Precision d count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.5d|\n" RESET, num);
printf(CYAN "Precision d count: %d;\n" RESET, count);

count = printf(GREEN "|%.0d|\n" RESET, 0);
printf(CYAN "Precision d with 0 count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.0d|\n" RESET, 0);
printf(CYAN "Precision d with 0 count: %d;\n" RESET, count);
*/
/* with %i (Signed Integer) */
/*
int num = -42;
count = printf(GREEN "|%.6i|\n" RESET, num);
printf(CYAN "Precision i count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.6i|\n" RESET, num);
printf(CYAN "Precision i count: %d;\n" RESET, count);

count = printf("|%-5d|\n", -1);
printf(CYAN "Precision i with 0 count: %d;\n" RESET, count);
count = ft_printf("|%-5d|\n", -1);
printf(CYAN "Precision i with 0 count: %d;\n" RESET, count);
*/

// count = printf(RESET "5Lp %us*W8T%iZG\fMs,|!%p=%XQ({x~%icKI]b<=9%sOF\-<F']m%XqEF1So,%%0\r~:o<", 1942086419, -494265451, (void
// *)9152984833886920443, -1560051102, 720965491, "2oOrt'7On4#Q\\\fT!c|Al]2qyC.\n``{B\ffyj\fTR}CWX%Pc.O\t#E)$~(NIR~", -233551413);
// printf(CYAN "\n\nPrecision i with 0 count: %d;\n" RESET, count);
// count = ft_printf(RESET "5Lp %us*W8T%iZG\fMs,|!%p=%XQ({x~%icKI]b<=9%sOF\-<F']m%XqEF1So,%%0\r~:o<", 1942086419, -494265451, (void
// *)9152984833886920443, -1560051102, 720965491, "2oOrt'7On4#Q\\\fT!c|Al]2qyC.\n``{B\ffyj\fTR}CWX%Pc.O\t#E)$~(NIR~", -233551413);
// printf(CYAN "\n\nPrecision i with 0 count: %d;\n" RESET, count);

int a = printf("5Lp %us*W8T%iZG\fMs,|!%p=%XQ({x~%icKI]b<=9%sOF\-<F']m%XqEF1So,\r~:o<",  
    1942086419, -494265451, (void*)9152984833886920443, -1560051102, 720965491, "2oOrt'7On4#Q\\\fT!c|Al]2qyC.\n``{B\ffyj\fTR}CWX%Pc.O\t#E)$~(NIR~", -233551413);
int b = ft_printf("5Lp %us*W8T%iZG\fMs,|!%p=%XQ({x~%icKI]b<=9%sOF\-<F']m%XqEF1So,\r~:o<",  
    1942086419, -494265451, (void*)9152984833886920443, -1560051102, 720965491, "2oOrt'7On4#Q\\\fT!c|Al]2qyC.\n``{B\ffyj\fTR}CWX%Pc.O\t#E)$~(NIR~", -233551413);
printf("\nprintf: %d, ft_printf: %d\n", a, b);










/* with %u (Unsigned Integer) */
/*
unsigned int unum = 42;
count = printf(GREEN "|%.4u|\n" RESET, unum);
printf(CYAN "Precision u count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.4u|\n" RESET, unum);
printf(CYAN "Precision u count: %d;\n" RESET, count);

count = printf(GREEN "|%.0u|\n" RESET, 0);
printf(CYAN "Precision u with 0 count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.0u|\n" RESET, 0);
printf(CYAN "Precision u with 0 count: %d;\n" RESET, count);
*/
/* with %x (Lowercase Hexadecimal) */
/*
unsigned int hexnum = 0x2a;
count = printf(GREEN "|%.5x|\n" RESET, hexnum);
printf(CYAN "Precision x count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.5x|\n" RESET, hexnum);
printf(CYAN "Precision x count: %d;\n" RESET, count);

count = printf(GREEN "|%.0x|\n" RESET, 0);
printf(CYAN "Precision x with 0 count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.0x|\n" RESET, 0);
printf(CYAN "Precision x with 0 count: %d;\n" RESET, count);
*/
/* with %X (Uppercase Hexadecimal) */
/*
hexnum = 0x2a;
count = printf(GREEN "|%.3X|\n" RESET, hexnum);
printf(CYAN "Precision X count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.3X|\n" RESET, hexnum);
printf(CYAN "Precision X count: %d;\n" RESET, count);

count = printf(GREEN "|%.0X|\n" RESET, 0);
printf(CYAN "Precision X with 0 count: %d;\n" RESET, count);
count = ft_printf(GREEN "|%.0X|\n" RESET, 0);
printf(CYAN "Precision X with 0 count: %d;\n" RESET, count);
*/

	return (0);
}

// cc -Wall -Werror -Wextra main.c libftprintf.a -o my_program

// ./my_program

// make fclean
