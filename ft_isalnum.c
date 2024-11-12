/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:02 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/22 12:44:15 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_isalnum:
		Checks if the given character 'c' is alphanumeric. An alphanumeric
		character is either a letter (uppercase or lowercase) or a digit.
	Parameters:
		c - The character to be checked, represented as an integer.
	Return:
		Returns 1 if 'c' is an alphanumeric character (letter or digit).
		Returns 0 otherwise.	*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* int	main(void)
{
	if (ft_isalnum('7'))
		printf("El carácter SÍ es alfanumérico\n");
	else
		printf("El carácter NO es alfanumérico\n");
	return (0);
} */
