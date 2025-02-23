#include "libftprintf.h"

int	main(void)
{
	int		count;

	// count = ft_printf("test %s test %d\n", "sss", 666);

	// ft_printf("The characters writen %d\n", count);
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