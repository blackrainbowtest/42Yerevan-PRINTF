#include "ft_printf.h"

int	main()
{
	int count = 0;

	int n1 = 42;
    int n2 = -42;
    int n3 = 0;

    printf("Test 1 (обычный):\n");
    printf("printf   : |%d|\n", n1);
    ft_printf("ft_printf: |%d|\n", n1);

    printf("\nTest 2 (отрицательное число):\n");
    printf("printf   : |%d|\n", n2);
    ft_printf("ft_printf: |%d|\n", n2);

    printf("\nTest 3 (ноль):\n");
    printf("printf   : |%d|\n", n3);
    ft_printf("ft_printf: |%d|\n", n3);

    printf("\nTest 4 (ширина 5):\n");
    printf("printf   : |%5d|\n", n1);
    ft_printf("ft_printf: |%5d|\n", n1);

    printf("\nTest 5 (ширина 5, отрицательное число):\n");
    printf("printf   : |%5d|\n", n2);
    ft_printf("ft_printf: |%5d|\n", n2);

    printf("\nTest 6 (флаг -):\n");
    printf("printf   : |%-5d|\n", n1);
    ft_printf("ft_printf: |%-5d|\n", n1);

    printf("\nTest 7 (флаг 0):\n");
    printf("printf   : |%05d|\n", n1);
    ft_printf("ft_printf: |%05d|\n", n1);

    printf("\nTest 8 (флаг 0 с отрицательным числом):\n");
    printf("printf   : |%05d|\n", n2);
    ft_printf("ft_printf: |%05d|\n", n2);

    printf("\nTest 9 (ширина 10, точность 5):\n");
    printf("printf   : |%10.5d|\n", n1);
    ft_printf("ft_printf: |%10.5d|\n", n1);

    printf("\nTest 10 (ширина 10, точность 5, отрицательное число):\n");
    printf("printf   : |%10.5d|\n", n2);
    ft_printf("ft_printf: |%10.5d|\n", n2);

    printf("\nTest 11 (точность больше числа):\n");
    printf("printf   : |%.5d|\n", n1);
    ft_printf("ft_printf: |%.5d|\n", n1);

    printf("\nTest 12 (точность 0 и число 0):\n");
    printf("printf   : |%.0d|\n", n3);
    ft_printf("ft_printf: |%.0d|\n", n3);
	return (0);
}