/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:14:23 by igchurru          #+#    #+#             */
/*   Updated: 2025/02/07 15:28:10 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printchar(char c)
{
	return (write (1, &c, 1));
}

void	ft_printstr(char *str, int *q)
{
	int	i;

	if (!str)
		return (ft_printstr("(null)", q));
	i = 0;
	while (str[i])
	{
		*q += ft_printchar(str[i]);
		i++;
	}
}

void	ft_printhex(unsigned long n, int *q, char h)
{
	if (15 < n)
		ft_printhex(n / 16, q, h);
	if (h == 'x' || h == 'p')
		*q += ft_printchar("0123456789abcdef"[n % 16]);
	else if (h == 'X')
		*q += ft_printchar("0123456789ABCDEF"[n % 16]);
}

void	ft_printnbr(int n, int *q)
{
	if (n == -2147483648)
	{
		ft_printstr("-2147483648", q);
		return ;
	}
	if (n < 0)
	{
		*q += ft_printchar('-');
		n = -n;
	}
	if (9 < n)
		ft_printnbr(n / 10, q);
	*q += ft_printchar((n % 10 + '0'));
}

void	ft_printunsnbr(unsigned int n, int *q)
{
	if (9 < n)
		ft_printunsnbr(n / 10, q);
	*q += ft_printchar((n % 10 + '0'));
}
