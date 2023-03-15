/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:29:25 by omansour          #+#    #+#             */
/*   Updated: 2022/11/09 09:23:29 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

//prototypes
int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_put_unbr(unsigned int nb);
int	ft_putsmall_hnbr(unsigned int nb);
int	ft_putbig_hnbr(unsigned int nb);
int	ft_put_add(unsigned long nb);

#endif