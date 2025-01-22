/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:14:23 by igchurru          #+#    #+#             */
/*   Updated: 2025/01/22 15:14:34 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_printchar - Writes a character to standard output.
@c: Character to print.
@q: Counter for printed characters.
Returns: Updated counter after printing. */
int	ft_printchar(char c, int q)
{
	write (1, &c, 1);
	q++;
	return (q);
}

/*	ft_printstr - Writes a string to standard output.
@str: String to print.
@q: Counter for printed characters.
Returns: Updated counter after printing. 

Handle NULL string by printing "(null)".
Print each character of the string. */
int	ft_printstr(char *str, int q)
{
	int	i;

	if (!str)
		return (ft_printstr("(null)", q));
	i = 0;
	while (str[i])
	{
		q = ft_printchar(str[i], q);
		i++;
	}
	return (q);
}

/*	ft_printhex - Recursively prints a number in hexadecimal format.
@n: Unsigned number to print in hexadecimal.
@q: Counter for printed characters.
@h: Hexadecimal format ('x' for lowercase, 'X' for uppercase).
Returns: Updated counter after printing.

Recursive division by 16 to get all digits. */
int	ft_printhex(unsigned long n, int q, char h)
{
	if (15 < n)
		q = ft_printhex(n / 16, q, h);
	if (h == 'x' || h == 'p')
		q = ft_printchar("0123456789abcdef"[n % 16], q);
	if (h == 'X')
		q = ft_printchar("0123456789ABCDEF"[n % 16], q);
	return (q);
}

/*	ft_printnbr - Recursively prints a signed integer.
@n: Integer to print.
@q: Counter for printed characters.
Returns: Updated counter after printing.

Handle INT_MIN explicitly.
Print negative sign for negative numbers.
Recursive division by 10 to get all digits.
Print each digit */
int	ft_printnbr(int n, int q)
{
	if (n == -2147483648)
	{
		q = ft_printstr("-2147483648", q);
		return (q);
	}
	if (n < 0)
	{
		q = ft_printchar('-', q);
		n = -n;
	}
	if (9 < n)
	{
		q = ft_printnbr(n / 10, q);
	}
	q = ft_printchar((n % 10 + '0'), q);
	return (q);
}

/*	ft_printunsnbr - Recursively prints an unsigned integer.
@n: Unsigned integer to print.
@q: Counter for printed characters.
Returns: Updated counter after printing.

Recursive division by 10 to get all digits.
Print each digit. */
int	ft_printunsnbr(unsigned int n, int q)
{
	if (9 < n)
	{
		q = ft_printunsnbr(n / 10, q);
	}
	q = ft_printchar((n % 10 + '0'), q);
	return (q);
}
