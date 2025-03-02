#include "ft_printf.h"

int	main()
{
	int count_def = 0;
    int count_ft = 0;
/*
	int n1 = 42;
    int n2 = -42;
    int n3 = 0;

    printf("Test 1 (обычный):\n");
    count_def = printf("printf   : |%d|\n", n1);
    count_ft = ft_printf("ft_printf: |%d|\n", n1);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 2 (отрицательное число):\n");
    count_def = printf("printf   : |%d|\n", n2);
    count_ft = ft_printf("ft_printf: |%d|\n", n2);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 3 (ноль):\n");
    count_def = printf("printf   : |%d|\n", n3);
    count_ft = ft_printf("ft_printf: |%d|\n", n3);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 4 (ширина 5):\n");
    count_def = printf("printf   : |%5d|\n", n1);
    count_ft = ft_printf("ft_printf: |%5d|\n", n1);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 5 (ширина 5, отрицательное число):\n");
    count_def = printf("printf   : |%5d|\n", n2);
    count_ft = ft_printf("ft_printf: |%5d|\n", n2);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 6 (флаг -):\n");
    count_def = printf("printf   : |%-5d|\n", n1);
    count_ft = ft_printf("ft_printf: |%-5d|\n", n1);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 7 (флаг 0):\n");
    count_def = printf("printf   : |%05d|\n", n1);
    count_ft = ft_printf("ft_printf: |%05d|\n", n1);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 8 (флаг 0 с отрицательным числом):\n");
    count_def = printf("printf   : |%05d|\n", n2);
    count_ft = ft_printf("ft_printf: |%05d|\n", n2);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 9 (ширина 10, точность 5):\n");
    count_def = printf("printf   : |%10.5d|\n", n1);
    count_ft = ft_printf("ft_printf: |%10.5d|\n", n1);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 10 (ширина 10, точность 5, отрицательное число):\n");
    count_def = printf("printf   : |%10.5d|\n", n2);
    count_ft = ft_printf("ft_printf: |%10.5d|\n", n2);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 11 (точность больше числа):\n");
    count_def = printf("printf   : |%.5d|\n", n1);
    count_ft = ft_printf("ft_printf: |%.5d|\n", n1);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 12 (точность 0 и число 0):\n");
    count_def = printf("printf   : |%.0d|\n", n3);
    count_ft = ft_printf("ft_printf: |%.0d|\n", n3);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);


    printf("\nTest 13 (минимальное отрицвтельное число -2^32):\n");
    count_def = printf("printf   : |%d|\n", INT_MIN);
    count_ft = ft_printf("ft_printf: |%d|\n", INT_MIN);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
       count_def == count_ft ? GREEN : RED, count_def, count_ft);
*/


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
/*
    int x = 42;
    int *ptr_x = &x;
    void *null_ptr = NULL;
    char str[] = "Hello";

    printf("Test 1 (обычный указатель на int):\n");
    count_def = printf("printf   : |%p|\n", ptr_x);
    count_ft = ft_printf("ft_printf: |%p|\n", ptr_x);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 2 (указатель на строку):\n");
    count_def = printf("printf   : |%p|\n", str);
    count_ft = ft_printf("ft_printf: |%p|\n", str);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 3 (указатель на функцию main):\n");
    count_def = printf("printf   : |%p|\n", main);
    count_ft = ft_printf("ft_printf: |%p|\n", main);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 4 (NULL указатель):\n");
    count_def = printf("printf   : |%p|\n", null_ptr);
    count_ft = ft_printf("ft_printf: |%p|\n", null_ptr);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 5 (кастомный адрес 0xDEADBEEF):\n");
    count_def = printf("printf   : |%p|\n", (void *)0xDEADBEEF);
    count_ft = ft_printf("ft_printf: |%p|\n", (void *)0xDEADBEEF);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);

    // Флаги

    printf("\nTest 6 (- ширина 20):\n");
    count_def = printf("printf   : |%-20p|\n", ptr_x);
    count_ft = ft_printf("ft_printf: |%-20p|\n", ptr_x);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);

    printf("\nTest 7 (0 ширина 20):\n");
    count_def = printf("printf   : |%p %p|\n", LONG_MIN, LONG_MAX);
    count_ft = ft_printf("ft_printf: |%p %p|\n", LONG_MIN, LONG_MAX);
    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
           count_def == count_ft ? GREEN : RED, count_def, count_ft);
*/
   //  printf("\nTest 8 (NULL ширина 20):\n");
   //  count_def = printf("printf   : |%020p|\n", null_ptr);
   //  count_ft = ft_printf("ft_printf: |%020p|\n", null_ptr);
   //  printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
   //         count_def == count_ft ? GREEN : RED, count_def, count_ft);
/*
   int n1 = 42;
   int n2 = 0;
   int n3 = 2147483647;
   unsigned int n4 = 0xABCDEF;

   // Тесты для флага '-'
   printf("Test 1 (- флаг, ширина 8, %x):\n");
   count_def = printf("printf   : |%-8x|\n", n1);
   count_ft = ft_printf("ft_printf: |%-8x|\n", n1);
   printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n", 
          count_def == count_ft ? GREEN : RED, count_def, count_ft);

   printf("Test 2 (- флаг, ширина 8, %X):\n");
   count_def = printf("printf   : |%-8X|\n", n1);
   count_ft = ft_printf("ft_printf: |%-8X|\n", n1);
   printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n", 
          count_def == count_ft ? GREEN : RED, count_def, count_ft);

   // Тесты для флага '0'
   printf("Test 3 (0 флаг, ширина 8, %x):\n");
   count_def = printf("printf   : |%08x|\n", n1);
   count_ft = ft_printf("ft_printf: |%08x|\n", n1);
   printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n", 
          count_def == count_ft ? GREEN : RED, count_def, count_ft);

   printf("Test 4 (0 флаг, ширина 8, %X):\n");
   count_def = printf("printf   : |%08X|\n", n1);
   count_ft = ft_printf("ft_printf: |%08X|\n", n1);
   printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n", 
          count_def == count_ft ? GREEN : RED, count_def, count_ft);

   // Комбинация 0 + #
   printf("Test 5 (0 + # флаг, ширина 8, %x):\n");
   count_def = printf("printf   : |%#08x|\n", n1);
   count_ft = ft_printf("ft_printf: |%#08x|\n", n1);
   printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n", 
          count_def == count_ft ? GREEN : RED, count_def, count_ft);

   printf("Test 6 (0 + # флаг, ширина 8, %X):\n");
   count_def = printf("printf   : |%#08X|\n", n4);
   count_ft = ft_printf("ft_printf: |%#08X|\n", n4);
   printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n", 
          count_def == count_ft ? GREEN : RED, count_def, count_ft);
   */

//    int num1 = 0;
//    long num2 = LONG_MIN;
//    int num3 = 42;
//    int num4 = -42;

//    // Test 1: %x с 0
//    printf("Test 1 (%%x с 0):\n");
//    count_def = printf("printf   : |%x|\n", num1);
//    count_ft = ft_printf("ft_printf: |%x|\n", num1);
//    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
//           count_def == count_ft ? GREEN : RED, count_def, count_ft);

//    // Test 2: %x с LONG_MIN
//    printf("Test 2 (%%x с LONG_MIN):\n");
//    count_def = printf("printf   : |%lx|\n", num2);
//    count_ft = ft_printf("ft_printf: |%lx|\n", num2);
//    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
//           count_def == count_ft ? GREEN : RED, count_def, count_ft);

//    // Test 3: %x с 0-флагом, ширина 8, 42
//    printf("Test 3 (0-флаг, ширина 8, 42):\n");
//    count_def = printf("printf   : |%08x|\n", num3);
//    count_ft = ft_printf("ft_printf: |%08x|\n", num3);
//    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
//           count_def == count_ft ? GREEN : RED, count_def, count_ft);

//    // Test 4: %x с -флагом, ширина 8, 42
//    printf("Test 4 (-флаг, ширина 8, 42):\n");
//    count_def = printf("printf   : |%-8x|\n", num3);
//    count_ft = ft_printf("ft_printf: |%-8x|\n", num3);
//    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
//           count_def == count_ft ? GREEN : RED, count_def, count_ft);

//    // Test 5: %X с -флагом, ширина 8, -42
//    printf("Test 5 (-флаг, ширина 8, -42):\n");
//    count_def = printf("printf   : |%-8X|\n", num4);
//    count_ft = ft_printf("ft_printf: |%-8X|\n", num4);
//    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
//           count_def == count_ft ? GREEN : RED, count_def, count_ft);

//    // Test 6: %X с 0-флагом, ширина 8, -42
//    printf("Test 6 (0-флаг, ширина 8, -42):\n");
//    count_def = printf("printf   : |%08X|\n", num4);
//    count_ft = ft_printf("ft_printf: |%08X|\n", num4);
//    printf("%sРезультаты.\tprintf:%d\tft_printf:%d\n" RESET, 
//           count_def == count_ft ? GREEN : RED, count_def, count_ft);

       ft_printf("\n\n|%.5x|\n\n", 21);
       printf("\n\n|%.5x|\n\n", 21);
	return (0);
}