#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_print(char specifier, va_list ap)
{
	int		count;

	if (specifier == 'c')
		ft_write_char(va_arg(ap, int));
}

int	ft_printf(const char	*format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_print(*(++format), ap);
		else 
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	int		count;

	count = ft_printf("test %s test %d\n", "sss", 666);

	ft_printf("The characters writen %d\n", count);

	return (0);
}