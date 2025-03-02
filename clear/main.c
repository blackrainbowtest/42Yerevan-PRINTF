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

    printf("\nTest 13 (минимальное отрицвтельное число -2^32):\n");
    printf("printf   : |%d|\n", INT_MIN);
    ft_printf("ft_printf: |%d|\n", INT_MIN);


/*
    unsigned int u1 = 42;
    unsigned int u2 = 4294967254; // Это 2^32 - 42 (максимальное 32-битное беззнаковое число - 42)
    unsigned int u3 = 0;

    printf("Test 1 (обычное число):\n");
    printf("printf   : |%u|\n", u1);
    ft_printf("ft_printf: |%u|\n", u1);

    printf("\nTest 2 (большое число):\n");
    printf("printf   : |%u|\n", u2);
    ft_printf("ft_printf: |%u|\n", u2);

    printf("\nTest 3 (ноль):\n");
    printf("printf   : |%u|\n", u3);
    ft_printf("ft_printf: |%u|\n", u3);

    printf("\nTest 4 (ширина 5):\n");
    printf("printf   : |%5u|\n", u1);
    ft_printf("ft_printf: |%5u|\n", u1);

    printf("\nTest 5 (ширина 10):\n");
    printf("printf   : |%10u|\n", u2);
    ft_printf("ft_printf: |%10u|\n", u2);

    printf("\nTest 6 (флаг -):\n");
    printf("printf   : |%-10u|\n", u1);
    ft_printf("ft_printf: |%-10u|\n", u1);

    printf("\nTest 7 (флаг 0):\n");
    printf("printf   : |%010u|\n", u1);
    ft_printf("ft_printf: |%010u|\n", u1);

    printf("\nTest 8 (флаг 0 с большим числом):\n");
    printf("printf   : |%010u|\n", u2);
    ft_printf("ft_printf: |%010u|\n", u2);

    printf("\nTest 9 (ширина 10, точность 5):\n");
    printf("printf   : |%10.5u|\n", u1);
    ft_printf("ft_printf: |%10.5u|\n", u1);

    printf("\nTest 10 (ширина 10, точность 5, большое число):\n");
    printf("printf   : |%10.5u|\n", u2);
    ft_printf("ft_printf: |%10.5u|\n", u2);

    printf("\nTest 11 (точность больше числа):\n");
    printf("printf   : |%.5u|\n", u1);
    ft_printf("ft_printf: |%.5u|\n", u1);

    printf("\nTest 12 (точность 0 и число 0):\n");
    printf("printf   : |%.0u|\n", u3);
    ft_printf("ft_printf: |%.0u|\n", u3);

    printf("\nTest 13 (наименьшее число инт беззнаковое):\n");
    printf("printf   : |%u|\n", INT_MIN);
    ft_printf("ft_printf: |%u|\n", INT_MIN);
*/


	return (0);
}