/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:21:23 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:44:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_isdigit:
		Checks if the given character 'c' is a numeric digit. A numeric digit
		is defined as a character between 0 and 9 in the ASCII character set.
	Parameters:
		c - The character to be checked, represented as an integer.
	Return:
		Returns 1 if 'c' is a digit ('0'-'9').
		Returns 0 otherwise.	*/
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

/* int	main(void)
{
	if (ft_isdigit('A'))
		printf ("El carácter SÍ es un dígito\n");
	else
		printf ("El carácter NO es un dígito\n");
	return (0);
} */
