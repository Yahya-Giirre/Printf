#include "ft_printf.h"

static	void	check(char s, va_list *args, int	*len)
{
	if (s == 's')
		ft_str(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_nbr(va_arg(*args, int), len);
	else if (s == 'u')
		ft_u(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hex(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hex(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_p(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_len('%', len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			check(s[++i], &ap, &len);
			i++;
		}
		else
		{
			ft_putchar_len((char)s[i], &len);
			i++;
		}
	}
	va_end(ap);
	return (len);
}
