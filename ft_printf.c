/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:10:02 by igchurru          #+#    #+#             */
/*   Updated: 2025/02/19 15:19:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_checkpointer(size_t adr, int *q)
{
	if (!adr)
		ft_printstr("(nil)", q);
	else
	{
		ft_printstr("0x", q);
		ft_printhex(adr, q, 'x');
	}
}

static void	ft_discriminate(char d, va_list list, int *q)
{
	if (d == 'c')
		*q += ft_printchar(va_arg(list, int));
	else if (d == 's')
		ft_printstr(va_arg(list, char *), q);
	else if (d == 'p')
		ft_checkpointer(va_arg(list, size_t), q);
	else if (d == 'i' || d == 'd')
		ft_printnbr(va_arg(list, int), q);
	else if (d == 'u')
		ft_printunsnbr(va_arg(list, unsigned int), q);
	else if (d == 'x')
		ft_printhex(va_arg(list, unsigned int), q, 'x');
	else if (d == 'X')
		ft_printhex(va_arg(list, unsigned int), q, 'X');
	else if (d == '%')
		*q += ft_printchar('%');
	else
		return ;
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;
	int		q;

	va_start(list, str);
	i = 0;
	q = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_discriminate(str[i], list, &q);
		}
		else
			q += ft_printchar(str[i]);
		i++;
	}
	va_end(list);
	return (q);
}
