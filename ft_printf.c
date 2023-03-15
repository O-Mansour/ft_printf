/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:24:31 by omansour          #+#    #+#             */
/*   Updated: 2022/11/10 20:08:02 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, char c)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		i += ft_put_unbr(va_arg(args, unsigned int));
	else if (c == 'x')
		i += ft_putsmall_hnbr(va_arg(args, unsigned int));
	else if (c == 'X')
		i += ft_putbig_hnbr(va_arg(args, unsigned int));
	else if (c == 'p')
	{
		i += ft_putstr("0x");
		i += ft_put_add(va_arg(args, unsigned long));
	}
	else if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (c == 's')
		i += ft_putstr(va_arg(args, char *));
	else
		ft_putchar(c);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			j += ft_putchar(str[i]);
		else
		{
			i++;
			if (!str[i])
				return (j);
			else if (str[i] == '%')
				j += ft_putchar(str[i]);
			else
				j += ft_formats(args, str[i]);
		}
		i++;
	}
	va_end(args);
	return (j);
}
