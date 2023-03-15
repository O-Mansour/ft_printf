/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_fcts2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:57:00 by omansour          #+#    #+#             */
/*   Updated: 2022/11/09 09:23:02 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putsmall_hnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_putsmall_hnbr(nb / 16);
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

int	ft_putbig_hnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_putbig_hnbr(nb / 16);
		ft_putchar("0123456789ABCDEF"[nb % 16]);
		i++;
	}
	else
	{
		ft_putchar("0123456789ABCDEF"[nb]);
		i++;
	}
	return (i);
}
