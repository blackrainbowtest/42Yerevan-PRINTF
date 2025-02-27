#include "ft_printf.c"

static int	is_number(int c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_atoi(const char **format)
{
	int	count;

	count = 0;
	while ()
	{
		
	}
	return (count);
}
/*
	.........↓→→→↓
	abcdefgh%0--0d
	if minus_left is avalable than zero_space ignored!!!
*/
const char	*ft_format_parse(const char *format, t_keys *keys)
{
	keys->minus_left = 0;
	keys->zero_space = 0;
	keys->width = 0;
	keys->dot_precision = -1;

	while (*format == '-' || *format == '0')
	{
		if (*format == '-')
			keys->minus_left = 1;
		if (*format == '0')
			keys->zero_space = 1;
		++format;
	}
	if (is_number(*format))
		keys->width = ft_atoi(&format);
	if (*format == '.')
	{
		++format;
		keys->dot_precision = 0;
		if (is_number(*format))
			keys->dot_precision = ft_atoi(&format);
	}
	return format;
}