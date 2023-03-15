/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fcts1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:34:40 by omansour          #+#    #+#             */
/*   Updated: 2022/11/09 09:23:17 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		i++;
		nb *= -1;
		i += ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
		i++;
	}
	else
		i += ft_putchar(nb + 48);
	return (i);
}

int	ft_put_unbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i += ft_put_unbr(nb / 10);
		ft_putchar(nb % 10 + 48);
		i++;
	}
	else
	{
		ft_putchar(nb + 48);
		i++;
	}
	return (i);
}

int	ft_put_add(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_put_add(nb / 16);
		ft_putchar("0123456789abcdef"[nb % 16]);
		i++;
	}
	else
	{
		ft_putchar("0123456789abcdef"[nb]);
		i++;
	}
	return (i);
}
