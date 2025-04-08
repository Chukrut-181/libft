/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:28:39 by igchurru          #+#    #+#             */
/*   Updated: 2025/04/08 16:44:51 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts a string representation of a floating-point number to a float.
 *
 * The function iterates through the input string, handling an optional
 * leading sign ('-'). It accumulates the integer part of the number
 * and then handles the fractional part after a decimal point ('.').
 * The final float value is calculated by dividing the accumulated number
 * by the appropriate power of 10 based on the number of digits after
 * the decimal point and applying the sign.
 *
 * @param n A pointer to the null-terminated string representing the float.
 * @return The floating-point number represented by the input string.
 */

float	ft_atof(char *n)
{
	int		i;
	int		j;
	float	nb;
	int		m;

	i = 0;
	nb = 0;
	m = 1;
	j = 1;
	if (n[i] == '-')
	{
		m = -m;
		i++;
	}
	while (n[i] && n[i != '\n'])
	{
		if (j > 1 && n[i - 1] != '.')
			j *= 10;
		if (n[i] == '.')
			j *= 10;
		else
			nb = nb * 10 + (n[i] - 48);
		i++;
	}
	return (m * nb / j);
}
