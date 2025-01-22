/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:10:02 by igchurru          #+#    #+#             */
/*   Updated: 2025/01/22 15:10:23 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_checkpointer - Prints a pointer address in hexadecimal format.
@adr: Memory address to print.
@q: Counter for printed characters.
Returns: Updated counter after printing. */
static int	ft_checkpointer(size_t adr, int q)
{
	if (!adr)
		q = ft_printstr("(nil)", q);
	else
	{
		q = ft_printstr("0x", q);
		q = ft_printhex(adr, q, 'x');
	}
	return (q);
}

/*	ft_discriminate - Processes format specifiers and calls relevant functions.
@d: Format specifier character.
@list: Variable argument list.
@q: Counter for printed characters.
Returns: Updated counter after printing. */
static int	ft_discriminate(char d, va_list list, int q)
{
	if (d == 'c')
		q = (ft_printchar(va_arg(list, int), q));
	else if (d == 's')
		q = (ft_printstr(va_arg(list, char *), q));
	else if (d == 'p')
		q = ft_checkpointer(va_arg(list, size_t), q);
	else if (d == 'i' || d == 'd')
		q = ft_printnbr(va_arg(list, int), q);
	else if (d == 'u')
		q = ft_printunsnbr(va_arg(list, unsigned int), q);
	else if (d == 'x')
		q = (ft_printhex(va_arg(list, unsigned int), q, 'x'));
	else if (d == 'X')
		q = (ft_printhex(va_arg(list, unsigned int), q, 'X'));
	else if (d == '%')
		q = (ft_printchar('%', q));
	return (q);
}

/*	ft_printf - Mimics the C standard library's printf function.
@str: Format string containing text and format specifiers.
Returns: Total number of characters printed.

Initialize the variable argument list.
Check for format specifier.
Process specifier.
Print regular characters.
Clean up variable argument list.
Return total characters printed. */
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
			q = ft_discriminate(str[i], list, q);
		}
		else
		{
			q = ft_printchar(str[i], q);
		}
		i++;
	}
	va_end(list);
	return (q);
}
