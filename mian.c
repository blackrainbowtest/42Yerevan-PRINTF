#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_write_chr(int c)
{
	return (write(1, &c, 1));
}

int	ft_write_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += ft_write_chr((int)*str);
		++str;
	}
	return (count);
}

int	ft_write_dig(long n, int base)
{
	int		count;
	chat	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_write_dig(-n, base) + 1);
	}
	else if (n < base)
		return ft_write_chr(symbols[n]);
	else
	{
		count = ft_write_dig(n / base, base);
		return (count + ft_write_dig(n % base, base));
	}
}

int	ft_print(char specifier, va_list ap)
{
	int		count;

	if (specifier == 'c')
		count += ft_write_chr(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_write_str(va_arg(ap, char *));
	else if (specifier == 'd')
		count += ft_write_dig((long)va_arg(ap, int), 10);
	else if (specifier == 'x')
		count += ft_write_dig((long)va_arg(ap, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
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

	// count = ft_printf("test %s test %d\n", "sss", 666);

	// ft_printf("The characters writen %d\n", count);
	count = ft_printf("hex numbers %x", 42);
	ft_printf("printed chars count: %d\n", count);

	return (0);
}