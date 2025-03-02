#include "ft_printf.h"

static const char *	ft_get_align_padding(const char *format, t_keys *keys)
{
	while (*format == '-' || *format == '0')
	{
		if (*format == '-')
		{
			keys->left_align = 1;
			keys->zero_padding = 0;
		}
		else if (*format == '0' && !keys->left_align)
			keys->zero_padding = 1;
		++format;
	}
	return (format);
}

static const char *	ft_get_width(const char *format, t_keys *keys)
{
	while (*format >= '0' && *format <= '9')
	{
		keys->width = keys->width * 10 + (*format - '0');
		format++;
	}
	return (format);
}

static const char * ft_get_precision(const char *format, t_keys *keys)
{
	if (*format == '.')
	{
		format++;
		keys->precision = 0;
		while (*format >= '0' && *format <= '9')
		{
			keys->precision = keys->precision * 10 + (*format - '0');
			format++;
		}
	}
	return (format);
}
const char	*ft_format_parse(const char *format, t_keys *keys)
{
	format = ft_get_align_padding(format, keys);
	format = ft_get_width(format, keys);
	format = ft_get_precision(format, keys);
	if (keys->zero_padding && keys->precision >= 0)
		keys->zero_padding = 0;
	return (format);
}