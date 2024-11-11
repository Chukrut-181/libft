/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:43:56 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:44:57 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_isprint:
		Checks if the given character 'c' is a printable character.
		Printable characters are those with ASCII values from 32 to 126,
		which includes letters, digits, punctuation, and the space character.
	Parameters:
		c - The character to be checked, represented as an integer.
	Return:
		Returns 1 if 'c' is a printable character (ASCII 32-126).
		Returns 0 otherwise.
	Note:
		This function checks if 'c' falls within the range of ASCII values
		that represent printable characters.	*/
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	if (ft_isprint('\0'))
		printf ("El carácter SÍ es imprimible\n");
	else
		printf ("El carácter NO es imprimible\n");
	return (0);
} */
